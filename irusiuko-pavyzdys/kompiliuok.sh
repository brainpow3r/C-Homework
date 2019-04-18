#!/usr/bin/env bash
g++ $1 $2 $3 $4 $5 $6  `wx-config --cxxflags --libs` -o $1.exe
