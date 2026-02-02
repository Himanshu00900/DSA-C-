// Multiplication of two matrices
// Multiplication of two matrices
// Multiplication of two matrices
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns of Matrix A: ";
    cin >> n >> m;

    int p, q;
    cout << "Enter number of rows and columns of Matrix B: ";
    cin >> p >> q;

    // Check if multiplication is possible
    if (m != p) {
        cout << "Invalid Order: Multiplication not possible!";
        return 0;
    }

    int a[n][m], b[p][q], product[n][q] = {0};

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }

    // Multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            product[i][j] = 0;
            for (int k = 0; k < m; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output Result
    cout << "Product of the two matrices:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}





