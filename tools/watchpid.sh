#!/bin/bash
sudo ./read_mem.py $1 2> /dev/null | xxd | grep 12345678
