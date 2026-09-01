#include <stdio.h>

int main() {
    int m,f,r;
    while(1){
        scanf("%d %d %d",&m,&f,&r);
        if(m==-1&&f==-1&&r==-1){
            break;
        }
        int total=m+f;
        if(m==-1||f==-1||total<30){
            printf("F\n");}
            else if(total>=80){
                printf("A\n");
            }
            else if(total>=65){
                printf("B\n");
            }
            else if(total>=50 ||r>=50){
                printf("C\n");
            }
            else{
                printf("D\n");
            }
            }
        return 0;
        //o problem of Ruet Praramvika
    }
