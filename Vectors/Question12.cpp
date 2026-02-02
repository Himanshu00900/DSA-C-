// Copy the aaray in reverse order using single array
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
int output(vector<int>& v){
    int i = 0;
    int j = v.size() - 1;

    while(i < j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return 0;
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
    cout<<"The answer is : "<<endl;
    output(v);
    disp(v);
    
    return 0;
    

}