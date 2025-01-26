#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
   string str = "abacdaba"; // This is how a string is initlize...

   char df[100] = "Aaryan sharma is the coder"; // I want to enter the string inside the cin with space how to do it...

   cin.getline(df, 100); // If we want to pass the string with the space dot it ..

   cout << df << endl;

   int len = str.length(); // How to get the length of the string...

   str.erase(str.begin() + 2); // How to erase somthing from the string...

   cout << str;

   return 0;
}
/*
What is string ??

A string is a sequence of chracter that is treated a single object...
it is akind of data type that is used to store text..

*/