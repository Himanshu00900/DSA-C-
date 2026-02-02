// Printing vowels from Inputed strings
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count =0;
    int i = 0;
    while(i< str.size()){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;

        }
        i++;
    }
    cout<<count;

}