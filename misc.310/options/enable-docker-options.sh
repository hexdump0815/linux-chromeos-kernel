#!/bin/bash

cd /compile/source/linux-chromeos-3.10

for i in `cat /compile/doc/chromeos/misc.310/options/docker-options-mod.txt | grep -v ^#`; do
  echo $i
  ./scripts/config -m $i
done

for i in `cat /compile/doc/chromeos/misc.310/options/docker-options-yes.txt | grep -v ^#`; do
  echo $i
  ./scripts/config -e $i
done
