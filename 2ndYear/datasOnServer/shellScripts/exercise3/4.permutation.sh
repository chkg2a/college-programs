#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage : permutation <number> <range>"
    exit;
fi

factorial(){
    local num=$1
    local output=1
    for((i = $num; i > 0; i--)){
        output=$((output * i))
    }
    echo $output
}

nominator=$(factorial $1)
denominator=$(factorial $(($1 - $2)))

echo $((nominator / denominator))
