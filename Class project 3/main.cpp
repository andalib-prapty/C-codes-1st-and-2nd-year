#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

// Function to find maximum and minimum values
pair<int, int> findMaxMin(const vector<int>& data) {
    int maxVal = data[0];
    int minVal = data[0];
    for (int val : data) {
        if (val > maxVal) maxVal = val;
        if (val < minVal) minVal = val;
    }
    return {maxVal, minVal};
}

// Merge Sort
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < leftArr.size()) arr[k++] = leftArr[i++];
    while (j < rightArr.size()) arr[k++] = rightArr[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
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

    // Finding Max and Min values
    clock_t start = clock();
    pair<int, int> maxMin = findMaxMin(data);
    clock_t end = clock();
    double timeMaxMin = double(end - start) / CLOCKS_PER_SEC;
    cout << "Max: " << maxMin.first << ", Min: " << maxMin.second << ", Time: " << timeMaxMin << " seconds\n";

    // Sorting with Merge Sort
    start = clock();
    mergeSort(data, 0, data.size() - 1);
    end = clock();
    double timeMergeSort = double(end - start) / CLOCKS_PER_SEC;
    writeData(outputFile, data);
    cout << "Merge Sort Time: " << timeMergeSort << " seconds\n";

    return 0;
}
