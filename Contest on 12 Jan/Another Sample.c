#include <stdio.h>
int main()
{
    int width, height;
    printf("Enter width and height of the rectangle:\n");
    scanf("%d %d", &width, &height);
    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=width; j++)
        {
            if(i==1 || i==height || j==1 || j==width)
            {
                printf("# ");
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }
    return 0;
    //2103116
    //asked to create rectangular frame
}
