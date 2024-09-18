#include <bits/stdc++.h>
 using namespace std;

vector<int> readInput(int size) {
    vector<int> result(size);
    for (int i = 0; i < size; ++i) {
        cin >> result[i];
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int sizeA, sizeB;
        cin >> sizeA;
        vector<int> a = readInput(sizeA);
        cin >> sizeB;
        vector<int> b = readInput(sizeB);

        int sumA = accumulate(a.begin(), a.end(), 0);
        int sumB = accumulate(b.begin(), b.end(), 0);
        int maxB = *max_element(b.begin(), b.end());

        int result = sumA + sumB - maxB;
        cout << result << endl;
    }

    return 0;
}
