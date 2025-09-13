/*
 * Author: Mamun
 * Date: September 13, 2025
 * Selection Sort Algorithm (Ascending Order)
 *
 * Steps:
 * 1. Start with the first element; assume it is the smallest.
 * 2. Compare this element with the rest of the array to find the true smallest.
 * 3. Swap the smallest element with the current element.
 * 4. Move to the next position and repeat steps 1–3 until the second last element.
 * 5. The array is now sorted.
 *
 * Key Points:
 * - Works in-place (no extra memory needed)
 * - Time Complexity: O(n²)
 * - Space Complexity: O(1)
 * - Not stable (equal elements may not keep order)
 */


#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& numbers) {
    int size = numbers.size(); // Get the size of the array

    // Loop through each position in the array except the last
    for (int startIndex = 0; startIndex < size - 1; startIndex++) {
        int smallestIndex = startIndex; // Assume the current position is the smallest

        // Search for the smallest element in the unsorted part
        for (int currentIndex = startIndex + 1; currentIndex < size; currentIndex++) {
            if (numbers[currentIndex] < numbers[smallestIndex]) {
                smallestIndex = currentIndex; // Update smallestIndex if a smaller element is found
            }
        }

        // Swap the found smallest element with the current position
        if (smallestIndex != startIndex) {
            swap(numbers[startIndex], numbers[smallestIndex]);
        }
        // After each iteration, the element at startIndex is in its correct position
    }
}

int main() {
    // Example array to be sorted
    vector<int> numbers = {5, 3, 8, 1};

    selectionSort(numbers); // Call selection sort to sort the array

    // Print the sorted array
    cout << "Sorted array: ";
    for (int number : numbers) {
        cout << number << " "; // Output each element
    }
    cout << endl;

    return 0;
}
