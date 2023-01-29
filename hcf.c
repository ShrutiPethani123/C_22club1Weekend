/*

14. Take two number from user and print HCF of two number.

    12 - 1 2 3 4 6 12
    6 - 1 2 3 6
    hcf-6

    5 - 1 5 
    4 - 1 2 4
    hcf-1



*/

#include<stdio.h>
void main()
{
    int b,a,hcf,count=0,min;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b)
        min=b;
    else
        min=a;

    // for(int i=1;i<=min;i++)
    // {
    //     if(a%i==0 && b%i==0)
    //     {
    //         hcf=i;
    //     }
    //     count++;
    // }

    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        count++;
    }

    printf("%d  %d",hcf,count);
}
