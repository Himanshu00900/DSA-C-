// Printing matrices in wave format
// ---->-
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
    
    for(int i = 0; i<n; i++){
        if(i%2==0){
                for(int j = 0; j<m; j++){
                    cout<<a[i][j]<<" ";

            }
        }
        else{
            for(int j= m-1; j>=0; j--){
                cout<<a[i][j]<<" ";
            }
        }
        
    

        
    }

}

