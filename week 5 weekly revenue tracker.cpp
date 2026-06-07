/*program to compute the weekly revenue tracker,
BCS-05-0007/2025,Frashiah wamuhu*/

#include <iostream>
using namespace std;

int main() {
    // 1D array to store revenue for 7 days
    double revenue[7];
    double totalRevenue = 0, averageRevenue;

    // Input revenue for each day
    cout << "Enter revenue for 7 days:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7;

    // Display results
    cout << "\nTotal Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;

    return 0;
}
