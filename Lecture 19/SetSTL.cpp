#include <iostream>
#include <set>

using namespace std;

int main() {

    // Create an empty set
    set<int> s;

    // Insert elements
    // Duplicate values are ignored automatically
    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.insert(1);

    s.insert(6);
    s.insert(6);

    s.insert(0);
    s.insert(0);
    s.insert(0);

    // Set stores elements in sorted order
    cout << "Elements of set:" << endl;

    for (auto i : s) {
        cout << i << endl;
    }
    cout << endl;

    // Iterator pointing to first element
    set<int>::iterator it = s.begin();

    // Move iterator to second element
    it++;

    // Erase element at iterator position
    s.erase(it);

    cout << "After erase:" << endl;

    for (auto i : s) {
        cout << i << endl;
    }

    cout << endl;

    // Returns 1 if element exists, otherwise 0
    cout << "-5 is present or not -> " << s.count(-5) << endl;

    // Find returns iterator to element if found
    // Otherwise returns s.end()
    set<int>::iterator itr = s.find(5);

    cout << "Elements from 5 onwards:" << endl;

    for (auto it = itr; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}