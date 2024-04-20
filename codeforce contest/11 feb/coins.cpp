#include <iostream>

using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        long long b;
        cin>>a>>b;
        if(b==1 || b==a){cout<<"YES"<<endl;continue;}
        if((a%2!=0 && b%2==0) || (a%2 !=0&&b>a)){
            cout<<"No"<<endl;continue;

        }
        cout<<"YES"<<endl;
    }
    return 0;
}