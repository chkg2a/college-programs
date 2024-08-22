#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage : divisible <dividend> <divisor>"
    exit 1
fi

dividend=$1
divisor=$2

if [ $divisor = 0 ]; then
    echo "divisor cannot be 0"
    exit 1
fi

echo "Result : $(($dividend / $divisor))"
