#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;

int maxNumberOfBalloons(string text) {

        string target = "balon";
        vector<int> ans;
        for (int i = 0; i < target.size(); i++) {
            int count = 0;
            int j = 0;
            while (j < text.size()) {
                if (target[i] == text[j]) {
                    count++;
                }
                j++;
            }

            ans.push_back(count);
        }

        // 'l' and 'o' are needed twice in "balloon"
        ans[2] /= 2;
        ans[3] /= 2;
        int result = ans[0];
        for (int i = 1; i < ans.size(); i++) {
            result = min(result, ans[i]);
        }
        return result;
    }

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Maximum number of balloons: " << maxNumberOfBalloons(text) << endl;
    return 0;
}