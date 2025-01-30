#include <iostream>
#include <math.h>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Aaryan";
    m[4] = "Name";
    m[2] = "Sharma";
    m[3] = "vinod";

    m.insert({5, "Bheem"}); // used to insert the value inside the set...
    
    for (auto i : m)
    {
        cout << i.first << endl;  // Used to print the key value...
        cout << i.second << endl; // Used to print the value...
    }

    cout << endl;

    m.erase(5); // used to erase the value inside the set...

    auto it = m.find(5); // Used to find the element and then print them in the order...

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).second << endl;
    }

    return 0;
}

/*
What is map??

map is kind of data structure that store the data in the key formate ...

suppose i am storring my name aaryan and the key that is pointing toward it are 2 , all the keys are unique
and the only onr key is pointing toward the onr entity like 2 is pointing toward aaryan...

Always return the element in the sorted order...

time complexity is o(logn).

*/