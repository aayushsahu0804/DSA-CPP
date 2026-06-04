#include <iostream>
#include <stack>

using namespace std;

int main() {

    // Create an empty stack of strings
    stack<string> s;

    // Push elements onto the stack
    // Elements are added at the top
    s.push("love");
    s.push("babbar");
    s.push("Kumar");

    // Returns the top element of the stack
    cout << "Top Element -> " << s.top() << endl;

    // Removes the top element
    s.pop();

    // New top element after pop
    cout << "Top Element -> " << s.top() << endl;

    // Returns number of elements in stack
    cout << "Size of Stack -> " << s.size() << endl;

    // Checks whether stack is empty
    cout << "Empty or Not -> " << s.empty() << endl;

    return 0;
}