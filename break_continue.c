#include<stdio.h>

void main()
{
    int n;
    
    for(int i=0;i<10;i++)
    {
        printf("\nEnter a no: ");
        scanf("%d",&n);
        if(n%7==0)
        {
            // break;
            continue;
        }
        printf("%d",n);

    }
}