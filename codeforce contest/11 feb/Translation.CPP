#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s, t;
    cin>>s>>t; // input 
// reversed the string 
    string s_reversed = s;
    reverse(s_reversed.begin() ,s_reversed.end());

    if(t == s_reversed){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<< endl;
    }
    return 0;

}