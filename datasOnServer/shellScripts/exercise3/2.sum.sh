#!/bin/bash

if [ $# -lt 2 ];then
    echo "Usage : sum <term1> <term2> etc.";
    exit;
fi

sum=0
for i in $(seq 1 $#); do
    sum=$((sum + ${!i}))
done

echo $sum
