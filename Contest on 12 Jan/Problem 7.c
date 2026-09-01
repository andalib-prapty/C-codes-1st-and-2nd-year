#include <stdio.h>
int main(){
int x, y, W, H, r;
scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
if (x<W && y<H && r<=x && r<=y && r<=W-x && r<=H-y){
    printf("Yes\n");
}
else{
    printf("No\n");
}
return 0;
//2103116
//asked to find out if the circle or r radii and x, y centered are in the area of W,H rectangular with 0,0
}
