#! /bin/bash
echo "What is your name"
read NAME
mkdir $NAME
cd $NAME
for a in 1 2 3 4 5
do
touch $NAME$a.cpp
done

