#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of people in the line
    
    int count25 = 0, count50 = 0;  // Variables to keep track of 25 and 50 ruble bills
    
    for (int i = 0; i < n; i++) {
        int bill;
        cin >> bill;  // Read the current person's bill
        
        if (bill == 25) {
            // If the person has a 25 ruble bill, no change is needed
            count25++;
        } else if (bill == 50) {
            // If the person has a 50 ruble bill, give back one 25 ruble bill as change
            if (count25 > 0) {
                count25--;
                count50++;
            } else {
                cout << "NO";
                return 0;
            }
        } else if (bill == 100) {
            // If the person has a 100 ruble bill, give back 75 rubles as change
            if (count50 > 0 && count25 > 0) {
                count50--;
                count25--;
            } else if (count25 >= 3) {
                count25 -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    
    cout << "YES";
    return 0;
}
