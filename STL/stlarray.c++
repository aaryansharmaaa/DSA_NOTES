#include <iostream>
#include <math.h>
#include <array>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at second index " << a.at(2) << endl; // Return the element at the specific position...

    cout << "Element is empty or not " << a.empty() << endl; // Check weather the element is empty or not...

    cout << "First element " << a.front() << endl; // Check the first element inside the array...

    cout << "Last element " << a.back() << endl; // Check the last element inside the array...

    return 0;
}

//  What is the difference between simple array and an stl array...

// Answer--->
/*

when ever we assign a simple array it is of fixed size and the memory is allocated in a contignious form
where as in case of an stl array it is also of fixed type but offer more flexible way to define it using templet

In simple array we got limited functionality
In stl array there are more functionality like at, size, end, front...

*/
