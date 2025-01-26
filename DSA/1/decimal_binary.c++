/*
Program to convert a decimal number to binary , Just create a formula and then do it...
*/
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int dig = n & 1;                // TO get the right most bit...
        ans = (dig * pow(10, i)) + ans; // Create the formula...
        n = n >> 1;                     // Shifting the number to right side one time...
        i++;
    }
    cout << ans;

    return 0;
}

// Program to conevrt the binary number to decimal...
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int dig = n % 10; // If we are dealing with compiler Then the things are deal in bits so at that time we are going to use &... ie dig=n&1;
        ans = ans + dig * pow(2, i);
        i++;

        n = n / 10; // If we are dealing with compiler then we have to right shift the number... ie n=n>>1;
    }
    cout << ans;

    return 0;
}