#!/bin/bash

if [ -z "$CONFIG" ]; then
  CONFIG="Debug"
fi

for file in ./bin/$CONFIG/*; do
  name=$(basename $file)
  echo ">>>> running $name >>>>"
 $file && echo "<<<< $name done <<<<"
done
