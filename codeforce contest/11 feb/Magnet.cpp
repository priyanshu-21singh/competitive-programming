#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
     int  group_count = 0;
     string a[n];
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    for(int  i = 0;i < n;i++){
        if(i==0 || a[i] != a[i-1]){
            group_count++;
        }

    }
    cout<<group_count<<endl;
    return 0;
}