#include<stdio.h>
#include<string.h>
int main(){

char Sentence[1200];
fgets(Sentence, 1200, stdin);

for (int i=0; Sentence[i]!='\0'; i++){

    if (Sentence[i]>='A'&& Sentence[i]<='Z')

        printf("%c", Sentence[i]+32);

    else if(Sentence[i]>='a'&& Sentence[i]<='z'){

        printf("%c", Sentence[i]-32);
    }
    else {
        printf("%c", Sentence[i]);
    }
}
return 0;
//2103116
//Case Conversion of a line. A hoye jabe a ar a hoye jabe A
}
