#!/bin/bash

if [ $# -ne 2 ]; then
  echo "Usage : factInt <lowerLimit> <upperLimit>"
  exit 1
fi

factorial() {
  fact=1
  for i in $(seq 1 $1); do
    fact=$((fact * i))
  done
  echo -n $fact
}

for((i=$1;i<$2;i++)){
  echo "$i $(factorial $i)"
}
