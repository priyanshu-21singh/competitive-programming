#include <bits/stdc++.h>
//priyanshu180
using namespace std;
void display() {
    cout << "priyanshu180";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, d;
        cin >> n >> d;
        vector<int> div;
        div.push_back(1);
        if (d % 3 == 0 || n >= 3) {
            div.push_back(3);
        } if (d == 5) {
            div.push_back(5);
        }
        if (d == 7 || n >= 3) {
            div.push_back(7);
        }
        if (n >= 6 || (d % 3 == 0 && n >= 3) || d == 9) {
            div.push_back(9);
        } for (int i = 0; i < div.size(); i++) {
            cout << div[i];
            if (i != div.size() - 1) cout << " ";
        }
        cout << "\n";
    } return 0;
}