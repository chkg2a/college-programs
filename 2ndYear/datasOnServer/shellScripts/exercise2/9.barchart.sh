#!/bin/bash

if [ $# -lt 2 ]; then
  echo "Usage : barchart <noOfBars> <lengthOfBar> <lengthOfBar> ..."
  exit 1
fi

n=$(($1+1))

bar="*"
for i in $(seq 2 $n); do
  num=${!i}
  for j in $(seq 1 $num); do
    echo -n "*"
  done
  echo 
done
