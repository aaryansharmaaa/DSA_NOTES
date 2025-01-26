#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;

    s.push("aaryan"); // Used to push the element inside the stack...
    s.push("kumar");
    s.push("Sharma");

    cout << s.top() << endl; // Use dto get the top most element...

    s.pop(); // Used to remove the top most element....

    cout << s.top() << endl;

    cout << s.empty() << endl; // Used to check weather the stack is empty or not...
    cout << s.size();          // Use dto check the size of the stack...

    return 0;
}

/*

what is a stack??

A stack is container provided by standard templet library that follow the last in first out principle
it mean the element that comes last will first out ...

*/