#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to generate random numbers
vector<int> generateRandomNumbers(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 30000 + 1;
    }
    return arr;
}

// Iterative Linear Search
int linearSearchIterative(const vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

// Recursive Linear Search
int linearSearchRecursive(const vector<int>& arr, int x, int i = 0) {
    if (i >= arr.size())
        return -1;
    if (arr[i] == x)
        return i;
    return linearSearchRecursive(arr, x, i + 1);
}

// Iterative Binary Search
int binarySearchIterative(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int binarySearchRecursive(const vector<int>& arr, int x, int low, int high) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return binarySearchRecursive(arr, x, mid + 1, high);
    else
        return binarySearchRecursive(arr, x, low, mid - 1);
}

int main() {
    // Sizes of datasets to test
    vector<int> sizes = {1000, 5000, 10000, 15000};
    int x = 500;  // Value to search for

    cout << "Search Time Analysis (in milliseconds):\n\n";
    cout << "List Size | Linear Iter | Linear Rec | Binary Iter | Binary Rec\n";
    cout << "------------------------------------------------------------\n";

    // Testing each dataset size
    for (int n : sizes) {
        // Generate random numbers
        vector<int> arr = generateRandomNumbers(n);

        // Measure time for Iterative Linear Search
        auto start = high_resolution_clock::now();
        linearSearchIterative(arr, x);
        auto end = high_resolution_clock::now();
        auto linearIterTime = duration_cast<milliseconds>(end - start).count();

        // Measure time for Recursive Linear Search
        start = high_resolution_clock::now();
        linearSearchRecursive(arr, x);
        end = high_resolution_clock::now();
        auto linearRecTime = duration_cast<milliseconds>(end - start).count();

        // Sort the array for Binary Search
        sort(arr.begin(), arr.end());

        // Measure time for Iterative Binary Search
        start = high_resolution_clock::now();
        binarySearchIterative(arr, x);
        end = high_resolution_clock::now();
        auto binaryIterTime = duration_cast<milliseconds>(end - start).count();

        // Measure time for Recursive Binary Search
        start = high_resolution_clock::now();
        binarySearchRecursive(arr, x, 0, n - 1);
        end = high_resolution_clock::now();
        auto binaryRecTime = duration_cast<milliseconds>(end - start).count();

        // Display results
        cout << n << "      | "
             << linearIterTime << " ms     | "
             << linearRecTime << " ms     | "
             << binaryIterTime << " ms     | "
             << binaryRecTime << " ms\n";
    }

    return 0;
}
