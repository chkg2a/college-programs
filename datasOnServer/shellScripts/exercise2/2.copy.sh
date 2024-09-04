#!/bin/bash

if [ $# -ne 2 ]; then
  echo "Usage : copy <destination> <source>"
  exit 1
fi;

cp $2 $1
