// Sum Of the Elements of The Given ARRAY


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students : ";
    cin>> n;
    int arr[n];

    cout << "Enter the marks of students: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum +arr[i];
    }
    cout<<sum;




}