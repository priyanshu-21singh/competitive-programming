#include<iostream>
using namespace std;
int main(){
    int n , k ; // k is number of time we are performing subtraction.
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10!=0){
            n--;
        }else{
            n/=10;
        }

        

    }
    cout<<n<<endl;
    return 0;

}
// #include <iostream>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     for (int i = 0; i < k; i++) {
//         if (n % 10 != 0) {
//             // If the last digit is non-zero, decrement n by 1
//             n--;
//         } else {
//             // If the last digit is zero, divide n by 10
//             n /= 10;
//         }
//     }

//     // Output the final value of n after k subtractions
//     cout << n << endl;

//     return 0;
// }
