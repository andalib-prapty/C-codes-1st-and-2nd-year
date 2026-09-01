#include<stdio.h>
#include<string.h>
int main(){
int N;
scanf("%d", &N);
if (N <= 0) {
        fprintf(stderr, "Invalid input: N must be a positive integer\n");
        return 1;
    }

for (int i=0; i<N; i++){
    char boroo[101];

    scanf("%s", boroo);
size_t result=strlen(boroo);
if (result > 100) {
            fprintf(stderr, "Invalid input: word is too long (max length is 100)\n");
            return 1;
        }

    if (strlen(boroo)>=10){

     printf("%c%d%c\n", boroo[0], result-2, boroo[result-1]);
    }
    else {

        printf("%s\n", boroo);
    }

 }



return 0;
//2103116
//make a short form of a word longer than 10 letters
}
