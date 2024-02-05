#include <iostream>
using namespace std;

int main() {
    // Illustrating the Bubble Sort algorithm on an array of integers

    // Initialize an array with integer values
    int numbers[] = { 8, 7, 6, 5, 2, 4, 1, 3, 9 };

    // Calculate the length of the array
    int arrayLength = sizeof(numbers) / sizeof(int);

    // Apply the Bubble Sort algorithm to sort the array in ascending order
    for (int i = 0; i < arrayLength; i++) {
        // Iterate through the array up to the last but one element
        for (int j = 0; j < arrayLength - 1; j++) {
            // Compare adjacent elements and swap if necessary to achieve ascending order
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array in ascending order
    cout << "Sorted Array (Ascending Order): ";
    for (int i = 0; i < arrayLength; i++) {
        cout << numbers[i] << " ";
    }

    return 0; // Indicates successful completion of the program
}
