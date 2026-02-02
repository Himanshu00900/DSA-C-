// Perform Linear Search

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    // for(int i = 0; i<n; i++){
    //     if(arr[i]==x){
    //         cout<<"Elemnt found at index : "<<i;
    //         break;

    //     }
       
    // }
    int i;
    int idx;
    bool flag = false;
    for(int i = 0; i<n;i++){
        if(arr[i]==x){
            flag = true;
             idx = i;
        }
    }
    if(flag){
        cout<<"Element found at index: "<<idx;
    }
    else{
        cout<<"not found";
    }
}