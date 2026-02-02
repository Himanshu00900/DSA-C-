// Flipping the mt
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

void flip1(vector<vector<int>>& v) {
    int rows = v.size();
    int cols = v[0].size();
    for (int i = 0; i < rows; i++) {
        if (v[i][0] == 0) {          // flip entire row if first element is 0
            for (int j = 0; j < cols; j++) {
                v[i][j] = 1 - v[i][j];
            }
        }
    }
}

void flip2(vector<vector<int>>& v) {
    int rows = v.size();
    int cols = v[0].size();
    for (int j = 0; j < cols; j++) {
        int noz = 0, noo = 0;
        for (int i = 0; i < rows; i++) {
            if (v[i][j] == 0) noz++;
            else noo++;
        }
        if (noz > noo) {             // flip column if more zeros than ones
            for (int i = 0; i < rows; i++) {
                v[i][j] = 1 - v[i][j];
            }
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> v(rows, vector<int>(cols));

    cout << "Enter elements (0/1):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> v[i][j];
        }
    }

    disp(v);
    flip1(v);
    flip2(v);
    disp(v);

    return 0;
}

