#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int arr[n], summ = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} 
	// first sort the error...
	sort(arr, arr + n);
	 if (n % 2 != 0) {
		for (int i = 0; i < n; i++) {
			if (i < n / 2) {
				summ -= arr[i];
			}
			else {
				summ += arr[i];
			}
            
		}
	}
    // use loop 
	else {
		for (int i = 0; i < n; i++) {
			if (i < n / 2) {
				summ -= arr[i];
			}
			else {
				summ += arr[i];
			}

		}
	}
	cout << summ << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
