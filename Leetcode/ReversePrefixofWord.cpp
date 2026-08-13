// Leetcode 2000 : Reverse Prefix of Word

#include <iostream>
#include <string>
using namespace std;

string reversePrefix(string word, char ch) 
{
    int temp;
    for(int i = 0; i < word.length(); i++)
    {
        if(ch == word[i])
        {
            temp = i;
            break;
        }
        if(i == word.length() - 1 && ch != word[i])
        {
            return word;
        }
    }
    int s = 0;
    int e = temp;
    while(s <= e)
    {
        swap(word[s], word[e]);
        s++;
        e--;
    }
    return word;
}