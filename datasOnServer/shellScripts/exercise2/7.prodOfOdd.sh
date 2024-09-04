#!/bin/bash

if [ $# -ne 2 ]; then
  echo "Usage : productOfOdd <lowerLimit> <upperLimit>"
  exit 1
fi

prod=1
for i in $(seq 1 $2); do
  if [ $((i % 2)) == 1 ]; then
    prod=$((prod * i))
  fi
done

echo $prod
