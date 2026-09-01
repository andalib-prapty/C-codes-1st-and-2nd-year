#include<stdio.h>
#include<string.h>
int main(){
 char word[15];
 int i,j;
 scanf("%s", word);
 char rev[15];
 for(i=strlen(word)-1, j=0; i>=0,j<strlen(word); i--, j++){

            rev[j]=word[i];


 }
 if(strcmp(word, rev)==0){
    printf("YES");
 }
 else{
    printf("NO");
 }
 return 0;
}
