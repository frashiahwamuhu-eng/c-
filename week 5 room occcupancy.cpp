/* program to compute room occupancy,BCS-05-0007/2025,Frashiah Wamuhu*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 2D array for 5 floors and 10 rooms per floor
    int occupancy[5][10];

    // Seed random number generator
    srand(time(0));

    // Generate random occupancy data
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 = vacant, 1 = occupied
        }
    }

    // Display occupied and vacant rooms per floor
    cout << "Room Occupancy Report\n\n";

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Floor " << floor + 1
             << " -> Occupied Rooms: " << occupied
             << ", Vacant Rooms: " << vacant << endl;
    }

    return 0;
}
