#include <stdio.h>

void findDuplicates(const int nums[], int n) {
    int found[100] = {0}; // Assuming the range of elements is up to 100

    printf("Duplicate numbers found in the array: ");
    for (int i = 0; i < n; ++i) {
        if (found[nums[i]]) {
            printf("%d ", nums[i]);
        }
        found[nums[i]] = 1;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[100]; // Assuming the maximum size of the array is 100
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
    }

    findDuplicates(nums, n);

    return 0;
}
