#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string s;
    std::cin >> s;
    bool check = false;
    int count = 0;
    for (int j = 0; j < s.length(); ++j) {
        char i = s[j];
        count = count * 2;
        if (i == '1' || check) {
            count = count + 1;
        } else if (i != '0') {
            count = count + 1;
            check = true;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
