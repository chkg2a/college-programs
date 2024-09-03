#!/bin/bash

echo "Enter the Temperature in Degree C"
read tempInC

tempInF=$((( $tempInC * 9/5) + 32 ));

echo "Temperature in Fahrenheit = $tempInF"
