#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // =========================
    // BINARY SEARCH
    // =========================

    // Returns 1 if found, else 0
    cout << "Finding 6 -> "
         << binary_search(v.begin(), v.end(), 6)
         << endl;

    // =========================
    // LOWER BOUND
    // =========================

    // Returns iterator to first element >= target
    cout << "Lower Bound -> "
         << lower_bound(v.begin(), v.end(), 6) - v.begin()
         << endl;

    // =========================
    // UPPER BOUND
    // =========================

    // Returns iterator to first element > target
    cout << "Upper Bound -> "
         << upper_bound(v.begin(), v.end(), 4) - v.begin()
         << endl;

    cout << endl;

    int a = 3;
    int b = 5;

    // =========================
    // MAXIMUM
    // =========================

    cout << "Max -> " << max(a, b) << endl;

    // =========================
    // MINIMUM
    // =========================

    cout << "Min -> " << min(a, b) << endl;

    // =========================
    // SWAP
    // =========================

    swap(a, b);

    cout << "After Swap:" << endl;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    cout << endl;

    // =========================
    // REVERSE STRING
    // =========================

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout << "String -> " << abcd << endl;

    cout << endl;

    // =========================
    // ROTATE
    // =========================

    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After Rotate:" << endl;

    for (int i : v) {
        cout << i << " ";
    }

    cout << endl << endl;

    // =========================
    // SORT
    // =========================

    sort(v.begin(), v.end());

    cout << "After Sort:" << endl;

    for (int i : v) {
        cout << i << " ";
    }

    cout << endl;

    //sort(v.begin(), v.end(), greater<int>()); // Sort in descending order

    return 0;
}