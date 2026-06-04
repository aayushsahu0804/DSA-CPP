#include <iostream>
#include <queue>

using namespace std;

int main() {

    // Create an empty queue of strings
    queue<string> q;

    // Insert elements at the rear of the queue
    q.push("love");
    q.push("Babbar");
    q.push("Kumar");

    // Number of elements currently present
    cout << "Size before pop -> " << q.size() << endl;

    // Returns the first element of the queue
    cout << "Front Element -> " << q.front() << endl;

    // Returns the last element of the queue
    cout << "Back Element -> " << q.back() << endl;

    // Checks whether queue is empty
    cout << "Empty or Not -> " << q.empty() << endl;

    cout << endl;

    // Removes the front element
    q.pop();

    cout << "After pop:" << endl;

    // New front element after pop
    cout << "Front Element -> " << q.front() << endl;

    // Back element remains unchanged
    cout << "Back Element -> " << q.back() << endl;

    // Updated size
    cout << "Size after pop -> " << q.size() << endl;

    // Check again if queue is empty
    cout << "Empty or Not -> " << q.empty() << endl;

    return 0;
}