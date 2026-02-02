// leetcode 240
#include <iostream>
#include <vector>
using namespace std;

void disp(const vector<vector<int>>& v) {
    int rows = v.size();
    int cols = v[0].size();
    cout << "\n2D Vector elements are:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

// Return true if target found, otherwise false
bool dsd(const vector<vector<int>>& v) {
    int rows = v.size();
    int cols = v[0].size();
    int i = 0;
    int j = cols - 1;

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    while (i < rows && j >= 0) {
        if (v[i][j] == target) {
            return true;        // found, exit immediately
        } else if (v[i][j] > target) {
            j--;                // move left
        } else {
            i++;                // move down
        }
    }
    return false;               // not found
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> v(rows, vector<int>(cols));

    cout << "Enter elements (sorted row-wise & column-wise for this algo):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> v[i][j];
        }
    }

    disp(v);

    if (dsd(v)) {
        cout << "Present\n";
    } else {
        cout << "Not present\n";
    }

    return 0;
}
