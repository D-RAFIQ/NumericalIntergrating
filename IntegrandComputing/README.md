#Comment compiler:

g++ -c trapezoidal.cpp class_definite_integral.cpp main.cpp
g++ -o  main trapezoidal.o class_definite_integral.o main.o
./main
