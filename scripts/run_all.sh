#!/bin/bash

if [ -z "$CONFIG" ]; then
  CONFIG="Debug"
fi

for file in ./bin/$CONFIG/*; do
 $file
done
