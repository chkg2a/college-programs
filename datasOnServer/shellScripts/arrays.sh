#!/bin/bash

arr=(23 43 10 5 9)

for item in $(seq 0 $((${#arr[@]} - 1)) );do
    echo ${arr[$item]}
done
