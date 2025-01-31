#!/bin/bash

code=0

if [ -z "$CONFIG" ]; then
  CONFIG="Debug"
fi

directory_names=("outputs" "stderr" "stdin" "stdout" "logs")

for name in ${directory_names[*]}; do
  directory=./tests/$name
  if [ ! -d $directory ]; then
    echo "... creating missing directory $name ..."
    mkdir $directory -v
  else
    echo "... $name already exist ..."
  fi
done

function test_stdout {
  stdout_file=$1
  output_file=$2
  stderr_file=$3

  if [ ! -f $stdout_file ]; then
    return
  fi

  if [ ! -f $output_file ]; then
    return
  fi

  if cmp -s "$stdout_file" "$output_file"; then
    echo -en "\e[36m"
    echo "==== test has successfully completed ===="
    echo -en "\e[0m"
  else
    echo -en "\e[31m"
    echo -n "!!!! test failed: $name !!!!" | tee $stderr_file
    echo -e "\e[0m"
  fi
}

for file in ./bin/$CONFIG/*; do
  name=$(basename $file)
  echo -e "\e[36m>>>> running $name >>>>\e[0m"

  # The prepared test files
  stdout_file=./tests/stdout/$name

  if [ ! -f $stdout_file ]; then
    echo -e "\e[33m---- no test file for $name ----\e[0m"
  fi

  stdin_file=./tests/stdin/$name

  input=""
  if [ -f $stdin_file ]; then
    input=$(cat $stdin_file)
  else
    echo -e "\e[33m---- no input for $name ----\e[0m"
  fi

  # The project specific output files
  output_file=./tests/outputs/$name
  stderr_file=./tests/stderr/$name
  log_file=./tests/logs/$name

  echo "$input" | $file > >(tee -a $output_file $log_file) 2> >(tee -a $stderr_file $log_file)

  if [ ! -f $output_file ]; then
    echo "\[33mWarning: no output file created\e[0m"
  fi

  test_stdout $stdout_file $output_file $stderr_file

  if [ -f $output_file ]; then
    echo -e "\e[35m... removing output file ...\e[0m"
    rm $output_file -v
  fi

  if [ -s $stderr_file ]; then
    code=1
  fi

  if [ -f $stderr_file ]; then
    echo -e "\e[35m... removing stderror file ...\e[0m"
    rm $stderr_file -v
  fi

  echo "<<<< $name done <<<<"
done

exit $code
