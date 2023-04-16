#include <stdio.h>

void main()
{
    int a[5] = {11, 22, 33, 44, 55};

    printf("\n%d\n", a);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", &a[i]);
    }

    // printf("\n%d", *a);
    // printf("\n%d", *(a + 1));
    // printf("\n%d\n", *(a + 3));

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", *(a + i));
    // }

    int *p=a;
    printf("\n%d\n",*(p+1));
    *(p+1)=45;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }

}