// Addition of two matrices
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int a[n][m], b[n][m], sum[n][m];

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Addition
    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
