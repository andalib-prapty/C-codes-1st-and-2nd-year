#include<stdio.h>
struct cricketer {
int id;
char name[50];
int runs;
};
int main(){
    int n,sum=0;
    scanf("%d", &n);
    struct cricketer player[n];
    for (int i=0; i<n; i++){
    scanf("%d %s %d ", &player[i].id, &player[i].name, &player[i].runs);
   sum=sum+player[i].runs;
    }
   int average=sum/n;
   return 0;
}
