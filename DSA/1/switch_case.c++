#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b";
    cin >> a >> b;

    char op;
    cin >> op;

    switch (op) // The place where we have to pass the value it may be integer value or a character value any...
    {
    case '+':
        cout << "The sum of the number are " << a + b << endl;
        break; // Break statement will stop it from moving to the next step otherwise it will go to the next iteration..

    case '-':
        cout << "The sum of difference of the number are " << a - b << endl;
        break;

    case '*':
        cout << "The produxt of the number are " << a * b << endl;
        break;

    case '/':
        cout << "The divisible of these number are " << a / b;

        break;
    }

    return 0;
}

/*
switch case is basically used to perform operation symaltenously...
we have to pass the integer value to perform the operation...

*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the amount" << endl;
    cin >> n;

    switch (1) // The case of integer...
    {
    case 1:
        cout << "The number of notes required to represent the number in 100 are " << n / 100 << endl;
        n = n % 100;

    case 2:
        cout << "The number of 50 rupees notes required are " << n / 50 << endl;
        // No break statement is use so it will iterate to end...
        n = n % 50;

    case 3:
        cout << "The number of 20 rupees notes required are " << n / 20 << endl;
        n = n % 20;

    case 4:
        cout << "The number of 1 rupees coin required are " << n / 1 << endl;
        break;
    }

    return 0;
}