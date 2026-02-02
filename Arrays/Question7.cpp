// Q7. Find the last occurrence of x in the array.
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
    cout<<"Enter the integer you want to Find IDX: ";
    cin>>x;
    int idx = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            idx = i;
        }

    }
    if (idx != -1) {
        cout << "The last index of this element is: " << idx;
    } else {
        cout << "Element not found in the array.";
    }

}
