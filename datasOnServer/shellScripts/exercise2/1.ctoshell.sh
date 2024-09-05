#!/bin/bash

read -p "Enter the lower limit : " L
read -p "Enter the upper limit : " N
read -p "Enter the steps to jump : " S

g++ 1.c -o output;
cProg=$(./output $N);

fileName="newFile"

> $fileName

while IFS= read -r line; do
  if [ $L -gt $line ] || [ $(( line % S )) != 0 ]; then
    continue
  fi
  echo $line >> $fileName
done <<< "$cProg"

rm -rf output
