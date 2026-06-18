#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) 
{
    int n = s.length();
    int count = 0;
    for(int i = n-1; i>=0; i--)
    {
        if(count == 0 && s[i] == ' ')
        {
            continue;
        }
        if(s[i] == ' ')
        {
            return count;
        }
        count++;
    }
    return count;
}

int main() 
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int length = lengthOfLastWord(s);
    cout << "Length of the last word: " << length << endl;
    return 0;
}