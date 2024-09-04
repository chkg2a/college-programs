#!/bin/bash

read -p "Enter the lower limit : " L
read -p "Enter the upper limit : " N

cProg=$(./output $N);

fileName="newFile"

rm -f $fileName
touch $fileName

while IFS= read -r line; do
  if [ $L -gt $line ]; then
    continue
  fi
  echo $line >> $fileName
done <<< "$cProg"
