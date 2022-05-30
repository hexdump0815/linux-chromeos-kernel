#!/bin/bash

cd /compile/source/linux-chromeos-5.10

for i in `cat /compile/doc/chromeos/misc.510/options/docker-options-mod.txt | grep -v ^#`; do
  echo $i
  ./scripts/config -m $i
done

for i in `cat /compile/doc/chromeos/misc.510/options/docker-options-yes.txt | grep -v ^#`; do
  echo $i
  ./scripts/config -e $i
done
