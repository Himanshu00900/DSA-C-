// Sort 0 and !'s
// Using two pointers
// Sort 0's and 1's using two pointers
#include <iostream>
#include <vector>
using namespace std;

int disp(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

void output(vector<int>& v){
    int i = 0;
    int j = v.size() - 1;

    while(i < j){
        if(v[i] == 0){
            i++;
        }
        else if(v[j] == 1){
            j--;
        }
        else { // v[i] == 1 && v[j] == 0
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    int x;
    cin >> x;
    vector<int> v(x);

    for(int i = 0; i < x; i++){
        cin >> v[i];
    }

    cout << "Before: ";
    disp(v);

    output(v);

    cout << "After:  ";
    disp(v);

    return 0;
}

