#!/bin/bash

Help()
{
    echo "-h     prints opencalc commands."
    echo "-c     calculation option for opencalc."
    echo "-v     prints version of opencalc."
}
Calculation()
{
    cd "/opt/opencalc/bin"
    ./"opencalc"
}
Version()
{
    echo "ver-0.0_5 - opensun"
}

while getopts ":h v c" option; do
   case $option in
       h) Help
          exit;;
       c) Calculation
	  exit;;
       v) Version
	  exit;;
       \?) echo "Error: Invalid option"
         exit;;
   esac
done

echo "Select -h option for print other options."
