// Tarnspose without using extra array
//Transpose of matrix

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int a[n][m];
    int temp;

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < m; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            
        }
        
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }

}