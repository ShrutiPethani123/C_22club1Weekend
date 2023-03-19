#include<stdio.h>

void main()
{


    int b[100],n;
    printf("Entetr a size: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    int idx,ele;

    printf("\nEnter index: ");
    scanf("%d",&idx);
    printf("\nEnter element: ");
    scanf("%d",&ele);

    for(int i=n;i>idx;i--)
    {
        b[i]=b[i-1];
    }
    b[idx]=ele;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }


}