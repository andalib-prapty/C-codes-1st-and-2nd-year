#include <stdio.h>

int main()
{
    int i, N1, j, N2, N;
    scanf("%d", &N);
    int array1[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &N2);
    int array2[N2];

    for (j = 0; j < N2; j++)
    {
        scanf("%d", &array2[j]);
    }
    int array3[N1 + N2];
    i = j = 0;
    int in;
    for (in = 0; in < N1 + N2; in ++)
    {
        if (i < N1 && j < N2)
        {
            if (array1[i] < array2[j])
            {
                array3[in] = array1[i];
                i++;
            }
            else
            {
                array3[in] = array2[j];
                j++;
            }
        }

    }
    for (in = 0; in < N1+N2; in++)
    {
        printf("%d ", array3[in]);
    }
    printf("\n");
    return 0;
}
