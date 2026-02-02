// Rotation of array by 90 digree
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int a[n][m];
    int t[n][m];
    int temp;

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    // transpose of matrix 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                t[j][i] = a[i][j];
        }
    }
    for(int k = 0; k<m; k++){
        int i = 0; 
        int j = m-1;
        while(i<=j){
            int temp = t[k][i];
            t[k][i]  = t[k][j];
            t[k][j]  = temp;
            i++;
            j--;

        }
    }
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<< t[i][j]<<" ";
        }
        cout<<endl;
    }

}