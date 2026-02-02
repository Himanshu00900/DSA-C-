// Q8. Find the doublet in the Array whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value: ";
    cin >> x;

    cout << "The pairs are:\n";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // start from i+1 to avoid duplicates & self-pair
            if (arr[i] + arr[j] == x) {
                cout << arr[i] << " and " << arr[j] << endl;
            }
        }
    }

    return 0;
}
