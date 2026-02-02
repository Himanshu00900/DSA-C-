// Copy the aaray in reverse order using two array
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int disp(vector<int>&v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }
    disp(v);
    vector<int>v1(n);
    for(int i=0; i< v1.size(); i++){
        int j = v1.size()-1-i;
        v1[i]=v[j];
    }
    disp(v1);
    return 0;
    

}

