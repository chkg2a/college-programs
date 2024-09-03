#!/bin/bash

first=0
second=1
temp=0

N=$1

for (( i=0; i<$N; i++ )); do
    echo -n "$first, "
    temp=$(($first + $second))
    first=$second
    second=$temp
done

echo ""
