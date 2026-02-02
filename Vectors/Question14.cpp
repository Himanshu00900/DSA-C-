// Rotation of the array from the kth element
#include <iostream>
using namespace std;
#include<vector>
int disp(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   
}
void rev(int i,int j,vector<int>&v){

    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
    return;

}

int main() {
	// your code goes here
    int x;
    cin>>x;
    vector<int> v(x);
    int n  = v.size();
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;

    rev(0,n-k-1,v);
    rev(n-k,n-1,v);
    rev(0,n-1,v);
    disp(v);

	return 0;
}
