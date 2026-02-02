// PAscle trianngle printing
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;                       // number of rows
    vector<vector<int>> v(m);       // create m rows

    for (int i = 0; i < m; i++) {
        v[i].resize(i + 1);         // each row has i+1 elements
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1;
            } else {
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
            }
        }
    }

    // print the triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
