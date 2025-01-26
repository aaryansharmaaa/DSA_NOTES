#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int charlength(char arr[]) // This is how we are going to use function with chracter array...
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20]; // This is how we define a chracter array...

    cin >> name; // This is how the value of name taken as input...

    // If we an declaring the chracter array of size 20 and we are giving the input of length 10
    //  Then the remaning 10 block will be getting the random value...

    name[2] = '\0'; // This is how we put null chracter in an chracter array... WHEN WE GOT THE NULL CHRACTER WE HAVE TO STOP THILL THERE..

    cout << name << endl;
    cout << charlength(name); // The argument name is passed...

    return 0;
}
/*
What is chracter array??

Chracter array is a 1D array that is used to store the value inside it...

string is the 1-D array that is used to store chracter in the 1-d memory allocation...

*/