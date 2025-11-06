#!/bin/bash

filename="Yelo"

if [ -d "$filename" ]; then
    echo "File exist"
else
    echo "File does not exist. Creating a new file"
    touch $filename
    echo "File created"
fi
