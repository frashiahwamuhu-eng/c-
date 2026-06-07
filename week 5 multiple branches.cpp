/*program to compute the multiple branches,BCS-05-0007/2025,Frashiah Wamuhu*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 3 branches, 5 floors per branch, 10 rooms per floor
    int chain[3][5][10];

    int totalOccupied = 0;

    // Seed random number generator
    srand(time(0));

    // Assign random occupancy and count occupied rooms
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 or 1

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display result
    cout << "Total Occupied Rooms Across All Branches: "
         << totalOccupied << endl;

    return 0;
}
