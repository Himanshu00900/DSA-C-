// Move all Negative numbers to the beginning anf=d positive to last
#include <iostream>
using namespace std;
#include<vector>
int input(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    return 0;
}
void output(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>=0) j--;
        
        else{
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    
}
int disp(vector<int>&v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}


int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int> v(n);
    input(v);
    output(v);
    disp(v);


	return 0;
}