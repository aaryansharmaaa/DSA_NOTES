#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int power(int a, int b) // The place where function is created...
{
    int ans = 1;

    for (int i = 1; i <= b; i++) // The logic inside the function that we are going to use..
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    power(a, b); // This the where the function is call.. all the argument are passed here...

    cout << power(a, b);

    return 0;
}

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int nfactorial(int n)
{
    int fact = 1;

    while (n != 1)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

int lastfactorial(int n, int r)
{
    int denom = nfactorial(n);
    int rem = nfactorial(r) * nfactorial(n - r);

    int ans = denom / rem;

    return ans;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;

    cout << lastfactorial(n, r);

    return 0;
}

/*
what is function...

Function are basically the set of executable code that used more than one time in a code to perfom the task...

*/

/*
What is function call stack...

the function that is called at last will execute first for example the ncr program the int main function is lower int he stack sot it will execute
at last the lastfactorial will call at second and the function that is called at last is nfactorial it will execute first...

*/

/*
What is pass by value...

When one variable is created and it will pass to the function, the function will create the copy of that variable at different
location both the variable are different if we make any change int the variable in the main function it will not affect the another
variable and if we make the change int he function it will not change in main function..

*/