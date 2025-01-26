#include <iostream>
#include <math.h>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << "\n";

    for (auto i = s.begin(); i != s.end(); i++) // Used to print the element inside the set in same order...
    {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = s.rbegin(); i != s.rend(); i++) // Used to print the element in the reverse order...
    {
        cout << *i << " ";
    }
    cout << endl;

    s.erase(2);         // It will erase 2 from the set...
    s.erase(s.begin()); // It will erse the pointhing pointer from the set...

    cout << s.size();

    set<int>::iterator it = s.begin(); // Used to target the perticular iterator...
    it++;

    s.erase(it);

    return 0;
}

/*
what is set??

Set are the container provided by standard templet library that store unique element in a specific order...
suppose there are int a set we are storing 5 element 1,1,2,3,4 onr is two time there it will store it one time only...

set are of two type order set unordered set...

ordered set contain unique element...

*/

#include <iostream>
#include <math.h>
#include <set>
using namespace std;

int main()
{
    multiset<int> mset; // It si basically used to store the multiple values...

    mset.insert(1);
    mset.insert(1);
    mset.insert(2);
    mset.insert(3);
    mset.insert(3);

    for (auto i : mset)
    {
        cout << i << " ";
    }

    mset.find(3); // it will find the first three and then remove it from here...

    return 0;
}