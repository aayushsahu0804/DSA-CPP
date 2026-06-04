#include <iostream>
#include <list>

using namespace std;

int main() {

    // Create an empty list
    list<int> l;

    // Create a list of size 5 with all elements initialized to 100
    list<int> n(5, 100);

    cout << "Printing n" << endl;

    // Traverse and print list n
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;

    // Insert element at the back
    l.push_back(1);

    // Insert element at the front
    l.push_front(2);

    // Current list: 2 1
    cout << "List elements: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Erase first element
    l.erase(l.begin());

    cout << "After erase" << endl;

    // Print list after erase
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    // Returns number of elements in list
    cout << "Size of list -> " << l.size() << endl;

    return 0;
}