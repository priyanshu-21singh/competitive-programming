#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if(y < b){
            cout << -1 << endl;
        }
        else if(a == x && b == y){
            cout << 0 << endl;
        }
        else{
            int walking =0;
            while(b<y){
                a++;
                b++;
                walking++;
            }
            if(a < x){
                cout << -1 << endl;
            }
            else{
                while(a > x){
                    walking++;
                    a--;
                }
                cout << walking << endl;
            }
        }
    }

    return 0;
}