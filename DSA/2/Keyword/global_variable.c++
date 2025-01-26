#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int val=45;//Global variable can acess an where in the program...(SCOP IS GLOBAL) it is the bad practioce to acess 
//the global variable. because it can be change any where...
     
int main()
{
   int i=5;//Local variable can acess only inside the main function...(SCOP IS ONLY INSIDE THE FUNCTION)
return 0;
}

/*
What is local variable ??
A variable that is declared inside the block of code only and can be ascessible only ther...

What is global variable?

A global variable is the variable that come in the scope of every function inside the code ...

const variable --> const variable are the kind of variable whose value can't be changed any where in the program..

*/