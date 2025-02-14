#include<bits/stdc++.h>
using namespace std;
int main (){
    int b,k;
    cin>>b>>k;
    vector<int> a(k);
    for(int i=0;i<k;i++){
       cin>>a[i];
    }
    int odd_count = 0;
    if(b%2 == 0){
        if(a[k-1]%2 == 0)
           cout<<"even"<<endl;
        else  
           cout<<"odd"<<endl;
    }else{
        for(int i=0;i<k;i++){
            if(a[i]%2 !=0){
                odd_count++;
            }
        }
        if(odd_count % 2 == 0)
           cout<<"even"<<endl;
        else
           cout<<"odd"<<endl;
    }
    return 0;


}
