#!/bin/bash

arr=(11 22 33 44 55 66)

sum=0
for i in $(seq 0 ${#arr[@]}); do
    sum=$((sum + $((${arr[$i]} - 1 ))))
done
echo "Results : $(($sum / ${#arr[@]}))"
