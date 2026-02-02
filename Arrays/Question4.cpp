// Finding the Maximum Element in the array

#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of students : ";
    cin >> n;
    int arr[n];

    cout << "Enter the marks of students: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = INT_MIN; // max = a[0]
    for(int i = 0; i<n;i++){
        if(max<arr[i]) max = arr[i];
        

    }
    cout<<max;
}

