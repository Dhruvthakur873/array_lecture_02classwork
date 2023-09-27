// Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
// number sorted in increasing order.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Square each number
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] * v[i];
    }

    // Print the squares with spaces in between
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
