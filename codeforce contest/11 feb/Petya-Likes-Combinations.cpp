#include <bits/stdc++.h>
using namespace std;
int main() 
{
long long n, d, j = 0, k = 0;
    cin >> n >> d;
    long long p[200000];
    for (long long i = 0; i < n; i++) 
    {
        cin >> p[i];
    // move 
        while (p[i] - p[j] > d) 
            j++;
        if (i - j >= 2) 
        {
            long long count = i - j;
            k += (count * (count - 1)) / 2;
        }   
    }

    cout << k << endl;
    return 0;
}
