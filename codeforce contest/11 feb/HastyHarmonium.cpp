#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int temp = 0;
    char least = 'z';
    for(int i=0; i<s.size()-1; i++){
        if(least > s[i]){
            temp = i;
            least = s[i];
        }
    }
    char least2 = 'z';
    for(int i=temp+1;i<s.size(); i++){
        if(least2 > s[i]){
            least2 = s[i];
        }
    }
    cout << least << least2 << "\n";   
}