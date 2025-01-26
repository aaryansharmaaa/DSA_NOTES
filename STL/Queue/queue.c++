#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int main()
{
   queue<string> q;

   q.push("Aaryan"); // Used to push the element inside the queue...
   q.push("Kumar");
   q.push("Sharme");

   cout << q.front() << endl; // Used to get the element which is at the front...

   q.pop(); // Used to remove the element which is at the front...

   cout << q.size(); // Used to get the size of the queue...

   return 0;
}

/*

what is a queue ?

A queue is a container provided by standard templet library which work on the principle of First in first out principle
it mean the element that will added first will remove first....

for example a person standing in the front of the line will get the food first ...

*/
