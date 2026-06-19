#!/bin/bash
if [[ $EUID -ne 0 ]]; then
   echo "This script must be run as root"
   exit 1
fi
$ARCH = $(uname -m)
echo "Starting Install Of 'diginum'..."
echo "Downloading Stuff..."
mkdir -p /usr/share/sandpotnoodles
wget https://raw.githubusercontent.com/ActuallySandPotNoodles/diginum-cpp/refs/heads/main/diginum.png -O /usr/share/sandpotnoodles/diginum.png
wget https://raw.githubusercontent.com/ActuallySandPotNoodles/diginum-cpp/refs/heads/main/diginum.desktop -O /usr/share/applications/diginum.desktop
if [[ "$(uname -m)" == "x86_64" ]]; then
wget https://github.com/ActuallySandPotNoodles/diginum-cpp/releases/download/v1.0.0/diginum_x86_64 -O /usr/bin/diginum
fi
if [[ "$(uname -m)" == "aarch64" ]]; then
wget https://github.com/ActuallySandPotNoodles/diginum-cpp/releases/download/v1.0.0/diginum_aarch64 -O /usr/bin/diginum
fi
chmod 775 /usr/bin/diginum
echo "Install Complete!"
