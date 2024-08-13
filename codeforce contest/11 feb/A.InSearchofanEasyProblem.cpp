#include <iostream>
using namespace std;

// by meee
int main() {
    int n;
    cin >> n; // Input a value for 'n'
    int sum = 0;
    for(int i = 0;i < n; i++){
        int x;
        cin>>x;
        sum+=x;
        
    }

    if(sum){
        cout<<"HARD" << endl;
    }else{
        cout<<"EASY" << endl;
    }
    return 0;
}
