#include <iostream>
#include <math.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> uset; // Unordered set are basically use to return the element in the unordered form...

    uset.insert(10);
    uset.insert(2);
    uset.insert(3);
    uset.insert(4);

    for (auto i : uset)
    {
        cout << i << " ";
    }


    uset.erase(2); // Used to remove 2 from the set...

    uset.erase(uset.begin());
    cout << endl;

    for (auto i : uset)
    {
        cout << i << " ";
    }

    return 0;
}