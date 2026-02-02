//USe of Substring
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin ,str);
    int len = str.size();
    cout<<str.substr(len/2);
// USe of to string
    int x  = 12345;
    string s = to_string(x);
    cout<<s;
    


    
}