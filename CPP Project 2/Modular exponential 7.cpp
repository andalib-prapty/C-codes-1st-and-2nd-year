#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace std::chrono;


vector<int> generateRandomNumbers(int size) {
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 30000 + 1;  // Random numbers between 1 and 30000
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
    const int n = 10000;  // Size of the array
    const int repetitions = 100;  // Number of repetitions for timing
    const int x = 500;  // Value to search for

    // Generate a random dataset
    vector<int> arr = generateRandomNumbers(n);

    cout << "Search Time Analysis (averaged over " << repetitions << " repetitions, in nanoseconds):\n";

    // Measure time for Iterative Linear Search
    long long totalLinearIterTime = 0;
    for (int i = 0; i < repetitions; i++) {
        auto start = high_resolution_clock::now();
        linearSearchIterative(arr, x);
        auto end = high_resolution_clock::now();
        totalLinearIterTime += duration_cast<nanoseconds>(end - start).count();
    }

    // Measure time for Recursive Linear Search
    long long totalLinearRecTime = 0;
    for (int i = 0; i < repetitions; i++) {
        auto start = high_resolution_clock::now();
        linearSearchRecursive(arr, x);
        auto end = high_resolution_clock::now();
        totalLinearRecTime += duration_cast<nanoseconds>(end - start).count();
    }

    // Sort the array once for Binary Search
    sort(arr.begin(), arr.end());

    // Measure time for Iterative Binary Search
    long long totalBinaryIterTime = 0;
    for (int i = 0; i < repetitions; i++) {
        auto start = high_resolution_clock::now();
        binarySearchIterative(arr, x);
        auto end = high_resolution_clock::now();
        totalBinaryIterTime += duration_cast<nanoseconds>(end - start).count();
    }

    // Measure time for Recursive Binary Search
    long long totalBinaryRecTime = 0;
    for (int i = 0; i < repetitions; i++) {
        auto start = high_resolution_clock::now();
        binarySearchRecursive(arr, x, 0, n - 1);
        auto end = high_resolution_clock::now();
        totalBinaryRecTime += duration_cast<nanoseconds>(end - start).count();
    }

    // Display results (averaged)
    cout << "Linear Iterative: " << totalLinearIterTime / repetitions << " ns\n";
    cout << "Linear Recursive: " << totalLinearRecTime / repetitions << " ns\n";
    cout << "Binary Iterative: " << totalBinaryIterTime / repetitions << " ns\n";
    cout << "Binary Recursive: " << totalBinaryRecTime / repetitions << " ns\n";

    return 0;
}
