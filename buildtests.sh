#! /bin/zsh

t=tests
b=build

clear
cd $t
echo "Removing previous build..."
rm -rf $b
mkdir $b
cd $b
echo "Building tests..."
cmake ..
make
