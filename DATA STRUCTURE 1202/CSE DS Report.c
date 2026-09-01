#include <iostream>
#include <limits> // For using numeric_limits

using namespace std;

const int ARRAY_SIZE = 6; // Given array is always 6x6

int hourglassSum(int arr[ARRAY_SIZE][ARRAY_SIZE]) {
    int maxSum = numeric_limits<int>::min();

    for (int i = 0; i <= ARRAY_SIZE - 3; i++) {
        for (int j = 0; j <= ARRAY_SIZE - 3; j++) {
            // Calculate the sum of the hourglass pattern
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                      arr[i + 1][j + 1] +
                      arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            // Update the maximum sum
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    return maxSum;
}

int main() {
    int arr[ARRAY_SIZE][ARRAY_SIZE];

    // Input the 2D array elements
    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate and print the maximum hourglass sum
    int maxHourglassSum = hourglassSum(arr);
    cout << maxHourglassSum << endl;

    return 0;
}







