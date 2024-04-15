#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int capacity = 0;
    int in_tram = 0;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        in_tram-=a;
        in_tram+=b;
        capacity = max(capacity,in_tram);


    }
    cout<<capacity;

    return 0;

}