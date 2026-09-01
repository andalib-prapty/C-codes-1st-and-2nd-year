#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(){
int t, array_length, sum=0;
scanf("%d", &t);
while(t--){
    scanf("%d", &array_length);
    int color[array_length];
    for(int i=0; i<array_length; i++){
        scanf("%d", &color[i]);
    }
    bubbleSort(color, array_length);
    for(int j=0; j<array_length/2; j++){
        sum+=color[array_length-j]-color[j];
    }
    printf("%d\n", sum);
}
return 0;
}
