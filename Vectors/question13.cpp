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
int rev(int i,int j,vector<int>&v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }
    cout<<"You entered : ";
    disp(v);
    cout<<"The reverse is : "<<endl;
 
    rev(0,4,v);
    disp(v);
    
    return 0;
    

}