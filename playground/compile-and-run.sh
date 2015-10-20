#!/bin/bash

SRC=./code.c
COMPILED=./_compiled

gcc $SRC -o $COMPILED
chmod +x $COMPILED
$COMPILED
