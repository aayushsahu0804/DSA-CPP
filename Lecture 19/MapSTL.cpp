#include <iostream>
#include <map>

using namespace std;

int main() {

    // Create an empty map
    // Key = int, Value = string
    map<int, string> m;

    // Insert elements using [] operator
    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    // Insert element using insert()
    m.insert({5, "bheem"});

    cout << "Before Erase" << endl;

    // Traverse the map
    // Elements are automatically sorted by key
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    // Checks if key exists
    // Returns 1 if present, 0 otherwise
    cout << "Finding -13 -> " << m.count(-13) << endl;

    // Delete element with key 13
    // Uncomment to test
    // m.erase(13);

    cout << endl;
    cout << "After Erase" << endl;

    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl << endl;

    // Find returns iterator to the key
    auto it = m.find(5);

    cout << "Elements from key 5 onwards:" << endl;

    for (auto i = it; i != m.end(); i++) {
        cout << (*i).first << " -> " << (*i).second << endl;
    }

    return 0;
}