#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v(5);
    v.push_back(6);
     v.pop_back();

    v.push_back(8);
     v.pop_back();
    v.push_back(6);
    v.pop_back();

    v.push_back(8);// Capacity remains Same after poping the element
     v.pop_back();
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;


    }
    for(int i =0; i<v.size(); i++){
        cin>>v[i];
    }
        for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;


    }
    // Sorting an vector
    sort(v.begin(), v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}