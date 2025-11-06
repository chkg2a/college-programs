#!/bin/bash

echo "Current time in IST: $(TZ="Asia/Kolkata" date '+%Y-%m-%d %H:%M:%S')"
echo "Current time in GMT: $(TZ="GMT" date '+%Y-%m-%d %H:%M:%S')"
echo "Current time in UTC: $(TZ="UTC" date '+%Y-%m-%d %H:%M:%S')"
echo "Current time in ET: $(TZ="America/New_York" date '+%Y-%m-%d %H:%M:%S')"
