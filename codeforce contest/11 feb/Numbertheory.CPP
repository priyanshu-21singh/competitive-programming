#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
const int MOD = 1000000007;

//  exponentiation
long long modular_exponentiation(long long base, long long exp, int mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}


long long sum_of_powers(long long p, long long k) {
    long long p69 = modular_exponentiation(p, 69, MOD);  // p^69 % MOD 4567
    long long pk69 = modular_exponentiation(p69, k, MOD); // (p^69)^k % MOD 234567

    
    long long pk_plus1_69 = (pk69 * p69) % MOD; 
    long long p69_minus_1 = (p69 - 1 + MOD) % MOD; 

    
    long long p69_minus_1_inv = modular_exponentiation(p69_minus_1, MOD - 2, MOD);

    
    long long sum_powers_mod = (pk_plus1_69 - 1 + MOD) % MOD;
    sum_powers_mod = (sum_powers_mod * p69_minus_1_inv) % MOD;

    return sum_powers_mod;
}

int main() {
    int n;
    cin >> n;

    long long result = 1;

    for (int i = 0; i < n; ++i) {
        long long p, k;
        cin >> p >> k;

        
        long long sum_powers_mod = sum_of_powers(p, k);

        
        result = (result * sum_powers_mod) % MOD;
    }

    cout << result << endl;

    return 0;
}
