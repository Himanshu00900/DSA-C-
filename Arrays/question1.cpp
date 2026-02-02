// Question : Marks of a student Contained in an array,If Marks are lower than 35 then Prints the roll number as index of array

#include <iostream>
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
    cout << "Students with marks less than 35 are: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] < 35) {
            cout << "Roll number " << i << " with marks " << arr[i] << endl;
        }
    }

   
    
}