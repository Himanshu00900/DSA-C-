// Finding  Element in the array greater than a input x 
#include<iostream>
using namespace std;
int main(){
        int n;
    cout<<"Enter the size : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin>>x;
    int count =0;
    for(int i =0; i<n; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Elements greater than x are : "<<count;



    }
    

