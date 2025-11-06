#!/bin/bash

# Function to check if a number is prime
is_prime() {
    local num=$1
    if [ "$num" -lt 2 ]; then
        return 1
    fi
    for ((i=2; i*i<=num; i++)); do
        if [ $((num % i)) -eq 0 ]; then
            return 1
        fi
    done
    return 0
}

# Prompt user for the range
echo "Enter the left bound of the range:"
read left
echo "Enter the right bound of the range:"
read right

# Validate input
if ! [[ "$left" =~ ^[0-9]+$ ]] || ! [[ "$right" =~ ^[0-9]+$ ]]; then
    echo "Please enter valid numeric values."
    exit 1
fi

if [ "$left" -gt "$right" ]; then
    echo "The left bound must be less than or equal to the right bound."
    exit 1
fi

# Print prime numbers in the given range
echo "Prime numbers between $left and $right are:"
for ((i=left; i<=right; i++)); do
    if is_prime $i; then
        printf "%d " "$i"
    fi
done
echo

