// 443. String Compression

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) 
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while(i < n) 
    {
        int j = i + 1;

        while(j < n && chars[i] == chars[j]) 
        {
            j++;
        }

        // Either entire vector traversed
        // or a different character encountered

        // Store old character
        chars[ansIndex++] = chars[i];

        int count = j - i;

        if(count > 1) 
        {
            // Convert count into string and store digits
            string cnt = to_string(count);

            for(char ch : cnt) 
            {
                chars[ansIndex++] = ch;
            }
        }
            // Move to next character
            i = j;
        }

    return ansIndex;
}

int main() {
    int n;
    cin >> n;

    vector<char> chars(n);
    for(int i=0; i<n; i++) {
        cin >> chars[i];
    }

    cout << compress(chars) << endl;
}