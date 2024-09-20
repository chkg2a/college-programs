#!/bin/bash

if [ $# -lt 2 ]; then
    echo "Usage : power <base> <power>"
    exit;
fi

base=$1;
pow=$2;

power() {
    output=1;
    for i in $(seq 1 $pow);do
        output=$((output * base))
    done
    echo $output
}

power
