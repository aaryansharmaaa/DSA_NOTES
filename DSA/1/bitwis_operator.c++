#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
   int n = 4;
   int m = 5;

   int z = n & m; // Usd to perform the and operation between two numbers..
   int l = n | m; // Used to perform or operation between two numbers..
   int b = n ^ m; // Used to perform xor operation between two numbers.

   n = n >> 1; // Means we are shifting the operator to tight one time.. in most of the case it will double the value...
   m = m << 1; // Means we are shifting the value to left one time .. in most of th e case it will decrease the value to half...

   return 0;
}
/*
XOR table
Input	Output
A	B	A ^ B
0	0	  0
0	1	  1
1	0	  1
1	1	  0

Input	Output
A	B	A & B
0	0	  0
0	1	  0
1	0	  0
1	1	  1

Input	Output
A	B	A | B
0	0	  0
0	1	  1
1	0	  1
1	1	  1

Input	Output
A	    ~A
0	     1
1	     0

*/