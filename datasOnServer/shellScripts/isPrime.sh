#!/bin/bash

# Function to check if a number is prime
is_prime() {
    local num=$1
    if [ "$num" -le 1 ]; then
        echo "$num is not a prime number."
        return
    fi

    for ((i=2; i<=num/2; i++)); do
        if [ $((num % i)) -eq 0 ]; then
            echo "$num is not a prime number."
            return
        fi
    done

    echo "$num is a prime number."
}

# Read input from the user
read -p "Enter a number: " number

# Call the function with the user input
is_prime "$number"
