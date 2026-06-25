//Leetcode Problem: 28. Find the Index of the First Occurrence in a String

#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) 
{

    if(haystack.length() < needle.length())
        return -1;

    for(int i = 0; i <= haystack.length() - needle.length(); i++)
    {
        bool match = true;

        for(int j = 0; j < needle.length(); j++)
        {
            if(haystack[i + j] != needle[j])
            {
                match = false;
                break;
            }
        }

        if(match)
        {
            return i;
        }
    }

    return -1;
}

/*class Solution {
public:
    int strStr(string haystack, string needle) {

        if(haystack.length() < needle.length())
            return -1;

        for(int i = 0; i <= haystack.length() - needle.length(); i++)
        {
            if(haystack.substr(i, needle.length()) == needle)
                return i;
        }

        return -1;
    }
};*/

int main() 
{
    string haystack = "hello";
    string needle = "ll";
    int index = strStr(haystack, needle);
    cout << "The index of the first occurrence of '" << needle << "' in '" << haystack << "' is: " << index << endl;

    return 0;
}