#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int countQ = 0;
    int countQA = 0;
    int countQAQ = 0;
    for(char c : s){
        if(c =='Q'){
            countQAQ+=countQA;
            countQ++;
        }else if (c=='A'){
            countQA+=countQ;
        }
    }
    cout<<countQAQ<<endl;
    return 0;
}