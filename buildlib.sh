#! /bin/zsh

b=build

clear
echo "Removing previous build..."
rm -rf $b
echo "Building library..."
mkdir $b
cd $b
cmake ..
make
