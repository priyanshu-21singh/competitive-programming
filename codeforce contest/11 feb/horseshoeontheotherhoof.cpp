#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> colors;
    int color;

    // Read the colors of the four horseshoes Valera has
    for (int i = 0; i < 4; ++i) {
        std::cin >> color;
        colors.insert(color); // Insert each color into the set
    }

    // Calculate the number of unique colors Valera currently has
    int uniqueColors = colors.size();

    // Calculate the number of additional horseshoes Valera needs to buy
    int additionalHorseshoesNeeded = 4 - uniqueColors;

    // Output the result
    std::cout << additionalHorseshoesNeeded << std::endl;

    return 0;
}
