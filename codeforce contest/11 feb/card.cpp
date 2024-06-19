#include<bits/stdc++.h>
using namespace std;

int main(){

    
    int testc;
    cin >> testc;

    for (int t = 1; t <= testc; t++){
        long long n;
        cin >> n;
        long long cnt = 0;

        while(n > 2){
            long long t = 5 ;
            long long p = 2 ;
            while(n >= t + p){
                p = t + p ;
                t += 3;
            }
            n -= p ;
            cnt ++;
        }
        
        if(n >= 2) cnt ++ ;
        cout << cnt << endl ;
    }

    return 0;
}
