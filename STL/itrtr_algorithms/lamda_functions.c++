#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
     
int main()
{
     auto valu=[](int x, int y) {return x+y;};// This is how the lambda function aer declared and they are called from () braces..

     cout<<valu(2,3);// another method to make the call for the function..
     cout<<endl;

     vector<int> val={1,45,10,12};

    cout<<all_of(val.begin(),val.end(),[](int x){return x>0;});//Use dto apply propert on every element..
    cout<<endl;

    cout<<any_of(val.begin(),val.end(),[](int x){return x>100;});//Used to apply the condition on any one element ..
    cout<<endl;
    cout<<none_of(val.begin(),val.end(),[](int x){return x>100;});//Use dto apply the condition on any of the elemtn..(koi bhi element 100 se bda toh anhi hh)


return 0;
}

/*
Lambda function are usually used to shorten the code , they can be re use withiout providing any name to them...

*/