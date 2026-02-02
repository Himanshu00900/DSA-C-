// Basics of 2D vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // First row
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(2);

    // Second row
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(3);
    v2.push_back(3);

    // 2D vector
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);

    // Print the 2D vector
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;  // new line after each row
    }

    return 0;
}
