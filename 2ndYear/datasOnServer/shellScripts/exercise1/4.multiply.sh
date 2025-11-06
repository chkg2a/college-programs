#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: multiply <number1>> <number2>"
    exit 1
fi

echo "Multipying $1 and $2 = $(($1 * $2))"
