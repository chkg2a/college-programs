#!/bin/bash

if [ $# -ne 3 ]; then
  echo "Usage : smallest <num1> <num2> <num3>"
  exit 1
fi

if [ $1 -lt $2 ] && [ $1 -lt $3 ]; then
  echo "$1 is the smallest";
elif [ $2 -lt $1 ] && [ $2 -lt $3 ]; then
  echo "$2 is the smallest"
else
  echo "$3 is the smallest"
fi
