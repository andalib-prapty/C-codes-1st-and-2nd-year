#include <stdio.h>
int main(){
int data[1500][2], x, y, count=0;
for (int i=0; i<1500; i++){
        scanf("%d %d", &x, &y);
        if (x==0 && y==0){
                break;
        }
if (x>y){
        data[i][0]=y;
        data[i][1]=x;
        }
        else{
                data[i][0]=x;
        data[i][1]=y;
        }
        count++;
    }


for(int i=0; i<count; i++){
        printf("%d %d\n", data[i][0], data[i][1]);
    }

return 0;
//2103116
//Asked to take 2 integer dataset in one line for several times and print them into ascending order for each dataset.
}
