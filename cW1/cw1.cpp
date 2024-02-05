#include<iostream>
using namespace std;

int main() {
    // Simple C++ program that prints "Hello World!!"
    cout << "Hello World!!\n";

    // Initialize an array of strings named cars with four elements ("Volvo", "BMW", "Ford", "Mazda").
    // Update the first element to "Opel" and print all the elements in the array using a loop.
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";

    // Loop to print the updated array of cars
    for (int i = 0; i < 4; i++)
        cout << cars[i] << " ";
    cout << endl;

    // Initialize an array of integers named myNumbers and use a range-based for loop to iterate through the elements.
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
        cout << i << "\n";

    // Initialize an array of strings named cars and update the second and third elements to "Volvo" and "BMW," respectively.
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[1] = "Volvo";
    cars[2] = "BMW";

    // Loop to print the updated array of cars
    for (int i = 0; i < 4; i++)
        cout << cars[i] << " ";
    cout << endl;

    // Initialize an array of integers named myNum and print the size of the array using the sizeof operator.
    int myNum[5] = {10,20,30,40};
    cout << "Size: " << sizeof(myNum) << endl;

    // Initialize a 2D array of strings named letters and use nested loops to iterate through and print each element.
    string letters[2][4] = {
        {"A","B","C","D"},
        {"E","F","G","H"}
    };

    // Nested loops to print the 2D array of letters
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\t";
        }
    }
    cout << endl;

    // Initialize a 3D array of strings named letters and use nested loops to iterate through.
    string letters3D[2][2][2] = {
        {
            {"A","B"},
            {"C","D"}
        },
        {
            {"E","F"},
            {"G","H"}
        }
    };

    // Nested loops to print the 3D array of letters
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters3D[i][j][k] << "\t";
            }
        }
    }
    cout << endl;

    // GAME
    // Put "1" to indicate there is a ship.
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    // Keep track of how many hits the player has and how many turns they have played.
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships.
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row.
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column.
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates.
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter.
            hits++;

            // Tell the player that they have hit a ship and how many ships are left.
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        } else {
            // Tell the player that they missed.
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken.
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns\n";
    return 0;
}
