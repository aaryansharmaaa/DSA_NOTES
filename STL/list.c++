#include <iostream>
#include <math.h>
#include <list>
using namespace std;

int main()
{

    list<int> l;         // This is how i creata a list...
    list<int> n(5, 100); // Initlize the list of 5 size and fill 100 at all the place...

    l.push_back(1); // Used to push the element from back...

    l.push_front(45); // Used to push the element in front...

    l.pop_back(); // Used to remove the element from the back..

    l.pop_front(); // Used to remove the element from front..

    l.erase(l.begin()); // Used to erase the perticular position in the list..

    cout << l.size(); // Used to get the size of the list...

    return 0;
}

/*
what is list ??

A list is a sequence container from standard templet library that allow non contiginious memory allocation , a list is a double linked list where each
element is connected to the previous and next element...

Direct access is not allowed in list ex... .at() function are not valid we have to travel to the element directly...

*/