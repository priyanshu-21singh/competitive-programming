#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_set<char> chars;
    for(int i=0;i<k;++i){
        char c;
        cin>>c;
        chars.insert(c);
    }
    long long count = 0;
    int i=0;
    while(i<n){
        int j=i;
        while(j<n && chars.count(s[j])>0){
            ++j;
        }
        int len=j-i;
        count += (long long)len*(len+1)/2;
        i = j+i;
    }
    cout<<count<<endl;
    return 0 ;
}