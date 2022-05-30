#!/bin/bash

cd /compile/source/linux-chromeos-5.10

for i in `cat /compile/doc/chromeos/misc.510/options/options-to-remove-generic.txt | grep -v ^#`; do
  echo $i
  ./scripts/config -d $i
done

for i in `cat /compile/doc/chromeos/misc.510/options/options-to-remove-special.txt | grep -v ^#`; do
  echo $i
  ./scripts/config -d $i
done
