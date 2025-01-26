#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int main()
{
    // Max heap...
    priority_queue<int> maxi; // If we are going to take out element out of it the max element will take out because it is max heap...

    // Min heap...

    priority_queue<int, vector<int>, greater<int>> mini; // if we are going to take out the elemeent it will return the minimum element...

    maxi.push(1); // Used to push the element inside the max priority queue...
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(0); // Used to push the element inside th minimum queuq...
    mini.push(1);
    mini.push(2);
    mini.push(3);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top();
        mini.pop();
    }
    cout << endl;

    cout << mini.empty(); // Use to check it is empty or not...

    return 0;
}

/*
what is priority queue?

Priority queue is a special kind of data structure where each element is associated with a priority . in a priority queue
element are served on the basic of priority not just by the order they were added..

*/