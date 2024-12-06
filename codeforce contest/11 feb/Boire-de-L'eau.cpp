#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> buckets(n);
    
    // Input the volume of water in each bucket
    for (int i = 0; i < n; ++i) {
        cin >> buckets[i];
    }
    
    int hours = 0;
    int participant = 1; // Number of participants used so far
    int current_load = 0; // Amount of water current participant can handle in the current hour
    
    for (int i = 0; i < n; ++i) {
        if (current_load + buckets[i] <= k) {
            // If adding the current bucket doesn't exceed participant's capacity
            current_load += buckets[i];
        } else {
            // If the current bucket exceeds the capacity, assign it to the next hour
            ++hours;
            current_load = buckets[i];
            ++participant;
            if (participant > m) {
                participant = 1; // Reassign participants in a new round if all participants have worked
            }
        }
    }
    
    if (current_load > 0) {
        ++hours; // Count the last remaining hour if there's water left in the last round
    }

    cout << hours << endl;
    
    return 0;
}
