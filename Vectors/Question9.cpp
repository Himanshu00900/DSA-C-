//Find the last occurence in the array
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v(6);

    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the element: ";
    cin>>x;
    int idx = -1;
    for(int i =0; i<v.size(); i++){
        if(x==v[i]){
            idx = i;
        }
    }
    cout<<"the Last index of element is : "<<idx;
}