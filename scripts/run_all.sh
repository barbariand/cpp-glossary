#!/bin/bash

if [ -z "$CONFIG" ]; then
  CONFIG="Debug"
fi

for file in ./bin/$CONFIG/*; do
<<<<<<< HEAD
<<<<<<< HEAD
  name=$(basename $file)
  echo ">>>> running $name >>>>"
 $file && echo "<<<< $name done <<<<"
=======
 $file
>>>>>>> 225fe56 (feat: added a justfile, watching and running of all files for testing)
=======
  name=$(basename $file)
  echo ">>>> running $name >>>>"
 $file && echo "<<<< $name done <<<<"
>>>>>>> aa22dd8 (fix: build step improvements)
done
