#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int *z;       // Garbage pointer whic is not storing any value in it...
    int *ptr = 0; // This is called null pointer...

    int num = 5;

    int *p = &num;
    (*p)++; // Increment the value that is stored inside the pointer...

    p = p + 1; // It man it move to the next chracter suppose that p is stored at 100 and integer is of 4 byte it will move to 104
    // because next integer is stored at 104...

    cout << *p << endl; // It will print the value 6 because num is increase...

    int *q = p; // this is how we copy one pointer to another pointer...

    cout << *q << endl; // it is the exact copy of the pointer so it will print the value of num...

    return 0;
}

/*
What is null pointer??

Null pointer is basically the kind of pointer which is not storing any adress it is pointing towards 0..

*/