#include<iostream>
using namespace std;
int main() {
    int n,a,d,i;
    char ch;
    while(cin>>n){

    
    a = 0;
    d = 0;
    for(i = 0; i < n; i++){
        cin>>ch;
        if(ch == 'A')
            a = a+1;
        else
            d = d + 1;
        

    }
    if(a>d)
     cout<<"Anton";
     else if (a<d)
     cout<<"Danik";
     else
     cout<<"Friendship";
    }
    return 0;
     
}