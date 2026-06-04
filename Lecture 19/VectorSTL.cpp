#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Empty vector
    vector<int> v;

    // Vector of size 5, initialized with value 1
    vector<int> a(5, 1);

    // Copying vector 'a' into vector 'last'
    vector<int> last(a);

    cout << "Print last" << endl;

    // Range-based for loop
    for (int i : last) {
        cout << i << " ";
    }
    cout << endl;

    // Returns current capacity (memory allocated)
    cout << "Capacity -> " << v.capacity() << endl;

    // Insert element at the end
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;

    // Number of elements currently stored
    cout << "Size -> " << v.size() << endl;

    // Access element at index 2
    cout << "Element at 2nd Index -> " << v.at(2) << endl;

    // First element
    cout << "Front -> " << v.front() << endl;

    // Last element
    cout << "Back -> " << v.back() << endl;

    cout << "Before Pop" << endl;

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Removes the last element
    v.pop_back();

    cout << "After Pop" << endl;

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Size before clearing vector
    cout << "Before Clear Size -> " << v.size() << endl;

    // Removes all elements from vector
    v.clear();

    // Size becomes 0
    cout << "After Clear Size -> " << v.size() << endl;

    return 0;
}