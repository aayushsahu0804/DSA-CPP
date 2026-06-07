// 1910. Remove All Occurrences of a Substring

#include <iostream>
#include <string>
using namespace std;
 
string removeOccurrences(string s, string part) 
{
        
    while(s.length()!=0 && s.find(part) < s.length()) 
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s, part;
    cin >> s >> part;

    cout << removeOccurrences(s, part) << endl;
}