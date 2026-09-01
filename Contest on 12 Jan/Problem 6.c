#include <stdio.h>
int main(){
int n1, n2, n3, large, middle, small;
scanf("%d %d %d", &n1, &n2, &n3);
if (n1<=n2){
    small=n1;
    large=n2;
}
else {large=n1;
small=n2;}
if (small>=n3){
        middle=small;
    small=n3;

}
else if(large<=n3){
    middle=large;
    large=n3;
}
else {middle=n3;};
printf("%d %d %d\n", small, middle, large);
return 0;
//2103116
//called for sorting three numbers in ascending order
}
