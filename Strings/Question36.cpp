// Two strings find the anagram of s and t.....
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string t;
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"1";
    else cout<<"0";


}