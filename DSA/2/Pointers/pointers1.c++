#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int ans = 5;
    char ch = 'a';

    cout << "Adress of num is " << &ans; // This is how the adress of variable is achived...

    int *ptr = &ans; // This is how the pointer is created and the ptr is storing the adress of ans...(THIS IS THE INTEGER POINTER)
    char *cha = &ch; // This si the character pointer...

    cout << *ptr; // Used to print the value of the ans...(* is dereference operator)...(THIS IS THE VALUE OF THE POINTER)


    // When we use pointer we always do pass by refrence so value cant be changen in the function as well as in main function...
    // The size of the pointer is same as of the data type ie.. int pointer is of 4 size double is of 8 size...
    return 0;
}

/*
What is pointer??

Pointer is basicallly the variable that store the adress of another variable...

SYMBOL TABLE -- SYMBOL TABLE IS A DATA STRUCTURE THAT IS USED BY COMPILER TO STORE AND MANAGE THE INFORMATION ABOUT PROGRAM SYMBOL..

example --- i declare the variable (int num=5) , so in the backed num is stored in the block but when we print the value of num we dont write the
adress of num we only write cout<<num , so this is the work of program symbol to map the value of adress wiht the num..

adress of operator used to get the adress of the operator...&

*/