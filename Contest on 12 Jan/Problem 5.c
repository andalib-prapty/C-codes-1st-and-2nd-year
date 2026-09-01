#include <stdio.h>
int main(){
int l, breadth, area, p;
scanf("%d %d", &l, &breadth);
area=l*breadth;
p=2*(l+breadth);
printf("%d %d\n", area, p);

//2103116
//have asked to find out area and perimeter from length and breadth

int s, h, m, sec;
scanf("%d", &s);
h=s/3600;
m=(s%3600)/60;
sec=(s%3600)%60;
printf("%d:%d:%d\n", h, m, sec);
//2103116
//have asked to find out hours:minutes:seconds of a given integer

int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a<b && b<c){
    printf("Yes\n");
}
else {printf("No\n");}
//if the given integers are a<b<c then print yes, otherwise no

return 0;
}
