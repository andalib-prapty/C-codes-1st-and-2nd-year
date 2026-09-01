#include <stdio.h>
#include<string.h>
int main(){
char a;
char word[]="codeforces";
int x;
scanf("%d", &x);
for(int i=1; i<=x; i++){

    scanf("%c", &a);
    if (a==word[i]){
        printf("YES\n");
    }
    else{printf("No\n");}
}
return 0;
}
