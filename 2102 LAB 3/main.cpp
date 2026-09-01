#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;       // Pointer for elements smaller than pivot

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // If the current element is smaller than the pivot
            i++;
            swap(arr[i], arr[j]); // Swap it with the element at i
        }
    }
    swap(arr[i + 1], arr[high]); // Place the pivot in its correct position
    return i + 1;
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Partition the array
        quickSort(arr, low, pivotIndex - 1);        // Recursively sort the left part
        quickSort(arr, pivotIndex + 1, high);       // Recursively sort the right part
    }
}

// Function to generate random data and save it to a file
void generateRandomData(const string& filename, int size) {
    ofstream outFile(filename);
    srand(time(0));
    for (int i = 0; i < size; i++) {
        outFile << (rand() % 30000 + 1) << " ";
    }
    outFile.close();
}

// Function to read data from a file
vector<int> readData(const string& filename) {
    ifstream file(filename);
    vector<int> data;
    int value;
    while (file >> value) {
        data.push_back(value);
    }
    return data;
}

// Function to write sorted data to a file
void writeData(const string& filename, const vector<int>& data) {
    ofstream file(filename);
    for (int val : data) {
        file << val << " ";
    }
    file << endl;
}

int main() {
    const string inputFile = "input.txt";
    const string outputFile = "output.txt";

    // Generate random data and save to input.txt
    generateRandomData(inputFile, 1000);

    // Read data from the file
    vector<int> data = readData(inputFile);

    // Sorting with Quick Sort
    clock_t start = clock();
    quickSort(data, 0, data.size() - 1);
    clock_t end = clock();
    double timeQuickSort = double(end - start) / CLOCKS_PER_SEC;
    writeData(outputFile, data);
    cout << "Quick Sort Time: " << timeQuickSort << " seconds\n";

    return 0;
}
