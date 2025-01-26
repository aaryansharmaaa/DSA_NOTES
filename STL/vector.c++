#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 1); // This is how we initlize an vector v(5,1) mean the starting size of the vector is 5 and the element are 1 all over the position...
    vector<int> last(v); // This is how we copy the one vector into another vector...
    v.push_back(1);      // Used to enter element inside the vector...
    v.push_back(2);
    v.push_back(3);

    cout << v.capacity() << endl; // Tell the total element holding capacity of the vector...

    cout << v.size() << endl; // Tell the sixe of the vector how many element inside the vector...

    cout << v.at(2) << endl; // Use to access the element...

    cout << v.front() << endl; // Used to get the first element inside the vector...

    cout << v.back() << endl; // Used to get the last element inside the vector...

    v.pop_back(); // Use to remove the element from the back of vector...

    v.clear(); // used to empty the array...

    return 0;
}

/*
what is vector?

Vector is a dynamic type array provided by standard templet library that have the ability to increase or decrease it size when the need come

example -- we define an vector of size 4 but it is full we need to put a 5 th element inside it but there is no place for it so
vector will create a copy of it twice the size of the present vector and copy all the current element inside the new vector and dumb the old vector

*/
