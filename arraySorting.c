#include<stdio.h>
void main()
{
    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    int a[size];

    for(int i = 0; i < size; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    printf("\nBefore sorting Array.....\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    int isSwpaped = 0;
    for(int i = 0; i < size-1; i++)
    {
        isSwpaped=0;
        printf("\npass: %d\n",i+1);
        for(int j = 0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSwpaped=1;

            }
            
            for(int k=0;k<size;k++)
            {
                printf("%d ", a[k]);
            }
            printf("\n");
        }

        if(isSwpaped==0)
        {
            break;
        }

    }




    printf("\nAfter sorting Array.....\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}