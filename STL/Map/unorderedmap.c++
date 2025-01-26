#include <iostream>
#include <math.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> unp;

    unp[1] = "Aaryan";
    unp[5] = "sharma";
    unp[0] = "Abdul";
    unp[4] = "Manish";

    unp.insert({10, "Babit"});

    for (auto i : unp)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = unp.find(4);

    for (auto i = it; i != unp.end(); i++)
    {
        cout << (*i).second << endl;
    }

    return 0;
}
/*
What is unordered map?

unordered map are the kind of data structure where the data is stored int he unorderd formate and the value are stored with key 

*/