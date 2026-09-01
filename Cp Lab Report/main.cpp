#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void bubbleSort(vector<int>& arr) {
    bool swapped;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}


void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}


void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to generate random numbers and write to file
void generateRandomNumbers(int n, const string& filename) {
    ofstream file(filename);
    srand(time(0));
    file << n << endl;
    for (int i = 0; i < n; i++) {
        file << (rand() % 30000 + 1) << " ";
    }
    file.close();
}

// Function to read numbers from file
vector<int> readNumbersFromFile(const string& filename) {
    ifstream file(filename);
    int n;
    file >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        file >> arr[i];
    }
    file.close();
    return arr;
}

// Function to write sorted numbers to file
void writeSortedToFile(const string& filename, const vector<int>& arr, const string& method) {
    ofstream file(filename, ios::app); // Appending to the file
    file << "After sorting by " << method << ": ";
    for (int i = 0; i < arr.size(); i++) {
        file << arr[i] << " ";
    }
    file << endl;
    file.close();
}

// Function to time the sorting algorithms
double timeSorting(void (*sortFunc)(vector<int>&), vector<int> arr) {
    clock_t start = clock();
    sortFunc(arr);
    return (double)(clock() - start) / CLOCKS_PER_SEC * 1000;  // Return time in milliseconds
}

int main() {
    string filename = "numbers.txt";
    int n = 1000;  // Adjust as needed

    // Step 1: Generate random numbers and write to file
    generateRandomNumbers(n, filename);

    // Step 2: Read numbers from file
    vector<int> arr = readNumbersFromFile(filename);

    // Step 3: Sort using Bubble Sort and write to file
    vector<int> arrCopy = arr;
    double bubbleSortTime = timeSorting(bubbleSort, arrCopy);
    writeSortedToFile(filename, arrCopy, "Bubble Sort");

    // Step 1: Generate random numbers and write to file
    generateRandomNumbers(n, filename);

    // Step 2: Read numbers from file
    arr = readNumbersFromFile(filename);

    // Step 4: Sort using Selection Sort and write to file
    arrCopy = arr;
    double selectionSortTime = timeSorting(selectionSort, arrCopy);
    writeSortedToFile(filename, arrCopy, "Selection Sort");

    // Step 1: Generate random numbers and write to file
    generateRandomNumbers(n, filename);

    // Step 2: Read numbers from file
     arr = readNumbersFromFile(filename);

    // Step 5: Sort using Insertion Sort and write to file
    arrCopy = arr;
    double insertionSortTime = timeSorting(insertionSort, arrCopy);
    writeSortedToFile(filename, arrCopy, "Insertion Sort");

    // Step 6: Output the times
    cout << "Bubble Sort Time: " << bubbleSortTime << " ms" << endl;
    cout << "Selection Sort Time: " << selectionSortTime << " ms" << endl;
    cout << "Insertion Sort Time: " << insertionSortTime << " ms" << endl;

    return 0;
}
