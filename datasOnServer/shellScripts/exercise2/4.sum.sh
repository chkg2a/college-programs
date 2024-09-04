#!/bin/bash

if [ $# -lt 2 ]; then
  echo "Usage : sum <noOfTerm> <1> <2> <3> ..."
  exit 1
fi

sum=0
for i in $(seq 2 $(($1+1)) ); do
  sum=$((sum + ${!i}))
done
echo $sum
