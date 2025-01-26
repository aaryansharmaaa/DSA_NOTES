#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    char * ptr=new char;//Tis is how memory is allocated dynamically...
    int * arr=new int[5];//This is how array is allocatd using dynamic memory...
    
    *ptr='a';

    cout<<*ptr<<endl;
    return 0;
}

/*

What is dunamic memory allocation?
Dynamic memory allocation is basically concept that was used in programing where memory is allocated during runtime in the heap..

stack memory===(STATIC MEMORY ALLOCATION)
heap memory===(DYNAMIC MEMORY ALLOCATION)

When program is come inside the compliler it consist of two kind of memory stack or heap  STACK MEMORY IS SMALL AND HEAP MEMORY is large

What is the reason why when we are defining array why the size of the array is not taken in input...

Ans because when program started it consist of two memory stack and heap momory if stack memory is small and the size of array that we are alocated
is large so the program will crash... so it is the bad practice to define the size of array without taking the input during the runtime .

What is the use of new keyword..

New keyword is basically used for dynamic memory allocation it is used to allocate memory on the heap...

*/