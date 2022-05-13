g++ $1.cpp -g -O0 -std=c++14 -I `dirname $0`
echo "compiled!"
./a.out