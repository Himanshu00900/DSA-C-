//Two sum problem
#include<iostream>
using namespace std;
#include<vector>
int main(){
     vector<int>v(6);

    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the element : ";
    cin>>x;
    
    for(int i=0; i<v.size()-2;i++){
        for(int j = i+1; j<v.size()-1; j++){
            if(v[i]+v[j]==x){
                cout<<"["<<v[i]<<","<<v[j]<<"]";
            }
    
    }
    

}
}