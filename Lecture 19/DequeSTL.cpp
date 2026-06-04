#include <iostream>
#include <deque>

using namespace std;

int main() {

    // Create an empty deque
    deque<int> d;

    // Insert element at the back
    d.push_back(1);

    // Insert element at the front
    d.push_front(2);

    // Current deque: 2 1

    // Removes first element (uncomment to use)
    // d.pop_front();

    cout << "Elements in deque: ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    // Access element at index 1
    cout << "Element at Index 1 -> " << d.at(1) << endl;

    // First element
    cout << "Front -> " << d.front() << endl;

    // Last element
    cout << "Back -> " << d.back() << endl;

    // Check whether deque is empty
    cout << "Empty or not -> " << d.empty() << endl;

    // Size before erase
    cout << "Before Erase Size -> " << d.size() << endl;

    // Erase first element
    d.erase(d.begin(), d.begin() + 1);

    // Size after erase
    cout << "After Erase Size -> " << d.size() << endl;

    // Print deque after erase
    cout << "Deque after erase:" << endl;
    for (int i : d) {
        cout << i << endl;
    }

    return 0;
}