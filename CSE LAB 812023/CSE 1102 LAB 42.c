#include <stdio.h>
double findMedian(int arr[], int n){
 double median;
 int midIndex=n/2;
 if (n%2==0){
    median= arr[midIndex-1]+arr[midIndex]/2;
 }
 else{
    median=arr[midIndex];
 }
 return median;
}
int main(){
    int arr[]={3, 4, 5, 6, 9};
    int n=sizeof(arr);
    double median=findMedian(arr, n);
    printf("%lf\n", median);
    return 0;
}
