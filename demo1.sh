#!/bin/bash
echo "Watching tripwire process for shenanigans..."
while true; do \
  pid=`ps aux | grep tripwired | grep -v grep | awk '{print $2}'`
  sudo ./tools/read_mem.py $pid 2> /dev/null | xxd | grep 12345678 > /dev/null || echo "Shenanigans!"
  sleep 2
done

