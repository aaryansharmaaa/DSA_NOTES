#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // Take the input of number of rows...

    for (int i = 0; i < n; i++) // Outer loop to print the number of rows...
    {
        for (int j = 0; j < n; j++) // Inner loop to print he number of column...
        {
            cout << "*"; // The pattern i want to print...
        }
        cout << endl; // Used to move to the next line after the pattern is printed completly...
    }
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // The outer loop that will print the number of row only...
    {
        for (int j = 1; j <= i; j++) // Here the half star pattern is printing so we take it equal to i...
        {
            cout << "*"; // The pattern you want to print...
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // The outer loop used to print the row...
    {
        for (int j = 1; j <= n - i; j++) // This was the first loop that is used to print the space..
        {
            cout << " "; // Printing the space...
        }
        for (int k = 1; k <= i; k++) // The second loop that is used to print the pattern in the column...
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}