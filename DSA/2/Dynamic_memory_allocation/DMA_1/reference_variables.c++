#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int &update2(int n)
{ // This function is basically return a reference variable type ...
    int val = n;
    int &m = val;
    return m;
}

void update(int &n)// We are pasing the reference here both n are same the one present in main function and this one in update function..
{ 
    n = n + 1;
}

int main()
{
    int i = 5;

    int &j = i; // This is how a referenece variable is created...

    int n = 45;

    cout << "The value before update" << n << endl;

    update(n);

    cout << "The value after update" << n << endl;

    cout << update2(45) << endl;

    return 0;
}

/*
What is reference variables??

When variable with different name are presenct at the same memory block are known as reference variable...

Example... I define a variable int i=5, a block of memory is allocated to it , then i gave a another anme to it j but they are present at the same
memory location are known as reference variable...
Real life example suppose my name in school is aaryan but at home people call me akshu but the thing is that both are same (This concept is reference variabla..)

why we need reference variable...

It provide a new anme to the existing variable we don't nted to create a new block of memory,and we use passed by refrence here

*/