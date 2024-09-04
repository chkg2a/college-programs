#!/bin/bash

if [ $# -ne 2 ]; then
  echo "Usage : sumOfEven <lowerLimit> <upperLimit>"
  exit 1
fi

for i in $(seq 1 $2); do
  if [ $((i % 2)) == 0 ]; then
    echo $i
  fi
done
