#include<stdio.h>

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    int count=0;

    // for( ; n!=0;)
    // {
    //     count++;
    //     n=n/10;
    // }


    // printf("Total digit is: %d",count);

    // factor

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
}