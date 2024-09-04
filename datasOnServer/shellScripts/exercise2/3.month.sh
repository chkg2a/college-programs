#!/bin/bash

export month="August"

echo $(set | grep month | awk -F= '{print $3}' | awk '{print $1}')
