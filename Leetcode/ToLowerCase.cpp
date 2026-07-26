//Leetcode Problem: 709. To Lower Case

#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s) 
{

    for (int i = 0; i < s.length(); i++) 
    {
        s[i] = tolower(s[i]);
    }

    return s;
}