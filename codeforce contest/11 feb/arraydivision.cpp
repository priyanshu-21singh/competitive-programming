#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long left = *max_element(arr.begin(), arr.end());
    long long right = accumulate(arr.begin(), arr.end(), 0LL);
    long long ans = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        
        long long currentsum = 0;
        long long subarray = 1; 
        for (long long num : arr) {
            if (currentsum + num > mid) {
                ++subarray;
                currentsum = num;
            } else {
                currentsum += num;
            }
        }

        if (subarray <= k) {
            ans = mid; 
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
