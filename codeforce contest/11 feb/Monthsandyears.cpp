#include <bits/stdc++.h>
using namespace std;

int main() {
    string month1 = "312831303130313130313031312831303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312831303130313130313031";
    int n;
    cin >> n;  
    vector<string> lines(n);
for (int i = 0; i < n; i++) {
        cin >> lines[i];
    }
string join;
    for (const auto& line : lines) {
        join += line;
    }
if (month1.find(join) != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
