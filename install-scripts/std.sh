#!/bin/bash

cd src/
make install
sudo mv pru /bin
sudo cd /bin
sudo chmod +x pru
printf "INSTALLED\n" 
