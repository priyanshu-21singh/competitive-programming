#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    std::cin>>a;
    while(a--){
        std::cin>>b>>c;
        std::cout<<c+(c-1)/(b-1)<<'\n';
    }
    return 0;
}