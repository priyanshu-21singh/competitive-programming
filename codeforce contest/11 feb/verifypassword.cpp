#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    while (testcase--) {
        int d;
        cin >> d;
        string s;
        cin >> s;

        vector<int> asciiValues(s.size()); // to check and store ascii value
        for (int i = 0; i < s.size(); i++) {
            asciiValues[i] = int(s[i]);
        }

        vector<int> sortedAsciiValues = asciiValues; 
        sort(sortedAsciiValues.begin(), sortedAsciiValues.end());

        bool areSame = equal(asciiValues.begin(), asciiValues.end(), sortedAsciiValues.begin()); // Changed variable name
        if (areSame) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    // by me on 30/05/23204
    //bool areSame = equal(asciiValues.begin(), asciiValues.end(), sortedAsciiValues.begin()); // Changed variable name
        // if (areSame) {
        //     cout << "YES" << endl;
        // } else {

    return 0;
}
