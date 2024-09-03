#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: convert <convert_to> <number>"
    exit 1
fi

convert_to=$1
number=$2

if test $convert_to = "binary"
then
    echo "obase=2;$number" | bc
elif test $convert_to = "hex"
then
    echo "obase=16;$number" | bc
elif test $convert_to = "octal"
then
    echo "obase=8;$number" | bc
else
    echo "Please enter a valid convert string"
fi
