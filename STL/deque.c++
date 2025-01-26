#include <iostream>
#include <math.h>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(1); // Used to push the element on the front side...;
    d.push_back(5);  // Used to push the element on the back side...;
    d.pop_back();    // Used to remove element from the back side..
    d.pop_front();   // Used to remove the element from the front side...

    d.empty(); // Used to know the deque is empty or not..
    d.at(1);   // Used to access the position...
    d.size();  // used to get the size...

    d.erase(d.begin(), d.begin() + 1); // Used to remove element from the position...

    return 0;
}

/*
What is double ended que ??

 Double ended queue or dek is a special kind of data structure that allow the programer to perform operation on both the
 end on the front and back side at the same time...

*/