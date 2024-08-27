#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    // case 1 all are capital
    bool allcapital = true;
    for(char c:s){
        if(islower(c)){
            allcapital =  false;
            break;
        }
    }
    // case 2 first capital and rest small
    bool first = islower(s[0]);
    for(int i=1;i<s.length();i++){
        if(islower(s[i])){
            first = false;
            break;
        }
    }
    if(allcapital || first){
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }else{
                s[i] = toupper(s[i]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}