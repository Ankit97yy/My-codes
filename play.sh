#!/bin/bash

echo "Enter song name"
link="$(python3 ~/codes/My-codes/test.py)"
mpv --no-video "$(echo $link | sed 's/enter song name: //')"
