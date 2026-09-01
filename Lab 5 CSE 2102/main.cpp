#include <iostream>
#include <algorithm>

using namespace std;

void print(int arr[], int psize) {
    for (int i = 0; i < psize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void unionArrays(int arr1[], int N, int arr2[], int M) {
    int unionSize = N + M;
    int unionArr[unionSize];

    copy(arr1, arr1 + N, unionArr);
    copy(arr2, arr2 + M, unionArr + N);

    sort(unionArr, unionArr + unionSize);

    cout << "A U B : ";
    print(unionArr, unionSize);
}

void intersectionArrays(int arr1[], int N, int arr2[], int M) {
    int intersectionArr[min(N, M)];

    sort(arr1, arr1 + N);
    sort(arr2, arr2 + M);

    int* end = set_intersection(arr1, arr1 + N, arr2, arr2 + M, intersectionArr);

    cout << "A Intersection B: ";
    print(intersectionArr, end - intersectionArr);
}

void setDifference(int arr1[], int N, int arr2[], int M, bool isDifferenceAB) {
    int differenceArr[N];

    sort(arr1, arr1 + N);
    sort(arr2, arr2 + M);

    if (isDifferenceAB) {
        int* end = set_difference(arr1, arr1 + N, arr2, arr2 + M, differenceArr);
        cout << "A - B: ";
        print(differenceArr, end - differenceArr);
    } else {
        int* end = set_difference(arr2, arr2 + M, arr1, arr1 + N, differenceArr);
        cout << "B - A: ";
        print(differenceArr, end - differenceArr);
    }
}

void symmetricDifference(int arr1[], int N, int arr2[], int M) {
    int symmetricDiffSize = N + M;
    int symmetricDiffArr[symmetricDiffSize];

    sort(arr1, arr1 + N);
    sort(arr2, arr2 + M);

    int* end = set_symmetric_difference(arr1, arr1 + N, arr2, arr2 + M, symmetricDiffArr);

    cout << "A Symmetric Difference B: ";
    print(symmetricDiffArr, end - symmetricDiffArr);
}

int main() {
    int N, M;

    cin >> N;
    int arr1[N];

    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    }

    cin >> M;
    int arr2[M];

    for (int i = 0; i < M; i++) {
        cin >> arr2[i];
    }

    unionArrays(arr1, N, arr2, M);
    intersectionArrays(arr1, N, arr2, M);
    setDifference(arr1, N, arr2, M, true);
    setDifference(arr1, N, arr2, M, false);
    symmetricDifference(arr1, N, arr2, M);

    return 0;
}
