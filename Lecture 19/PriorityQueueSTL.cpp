#include <iostream>
#include <queue>

using namespace std;

int main() {

    // =========================
    // MAX HEAP
    // =========================

    // By default, priority_queue is a Max Heap
    // Largest element stays at the top
    priority_queue<int> maxi;

    // =========================
    // MIN HEAP
    // =========================

    // Syntax for Min Heap
    // Smallest element stays at the top
    priority_queue<int, vector<int>, greater<int>> mini;

    // =========================
    // MAX HEAP OPERATIONS
    // =========================

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    // Number of elements in heap
    cout << "Size -> " << maxi.size() << endl;

    int n = maxi.size();

    cout << "Max Heap Elements: ";

    // Print elements in descending order
    while (!maxi.empty()) {
        cout << maxi.top() << " ";

        // Remove top element
        maxi.pop();
    }
    cout << endl;

    // =========================
    // MIN HEAP OPERATIONS
    // =========================

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();

    cout << "Min Heap Elements: ";

    // Print elements in ascending order
    while (!mini.empty()) {
        cout << mini.top() << " ";

        // Remove top element
        mini.pop();
    }
    cout << endl;

    // Check whether heap is empty
    cout << "Empty or Not -> " << mini.empty() << endl;

    return 0;
}