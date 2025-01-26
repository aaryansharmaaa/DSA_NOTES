#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void prinArr(int arr[], int n , int start=0){//The startt here is a default argument we can set it or not it is not the problem..
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
     
int main()
{
   int arr[5]={1,4,5,9,10};

   prinArr(arr,5);//Both the function call are going to work...

   cout<<endl;

   prinArr(arr,5,2);//Both the function call are going to workk...


return 0;
}