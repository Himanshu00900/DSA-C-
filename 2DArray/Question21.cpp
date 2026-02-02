//Transpose of matrix

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int a[n][m], b[n][m], t[n][m];

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           t[j][i] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<< t[j][i]<<" ";
        }
        cout<<endl;
    }

}