#include<stdio.h>
#include<string.h>
int main(){
char str1[20], str2[30];
fgets(str1, 20, stdin);
fgets(str2, 30, stdin);
for (int i=0;; i++){
        if (str1[i]==str2[i] && str1[i]='\0'){
    printf("Strings are Equal");}
else {
    printf("Strings are Not Equal");
}
}
return 0;
}
