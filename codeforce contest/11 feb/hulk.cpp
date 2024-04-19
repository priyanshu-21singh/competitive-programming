#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of layers

    string feeling = "I hate"; // Start with the base feeling "I hate"

    // Build the feeling expression layer by layer
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            feeling += " that I love";
        } else {
            feeling += " that I hate";
        }
    }

    feeling += " it"; // Complete the feeling expression

    cout << feeling << endl; // Output the final feeling expression

    return 0;
}
