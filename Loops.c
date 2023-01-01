/*
1. Entry control Loop
    for
    while
2. Exit control loop
    do while



-> for

for(init;condition;inc/dec)
{
    // block of code
}

-> while

init
while(condition)
{
    // code
    // inc /dec
}

-> do while

init
do{
    // code
    inc/dec

}while(condtion);


-> break , continue
*/
#include<stdio.h>

void main()
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",i);
    }

    printf("\n");
    for(int i=0;i<5;++i)
        printf("%d ",i);
        printf("royal");

    printf("\n");

    for(int i=5;i>0;i--)
    {
        printf("%d ",i);
    }

    printf("\n");


    // for( ; ; )
    // {
    //     printf("\nHello"); // infinite loop
    // }

    int i=1;
    for( ;i<5 ;)
    {
        printf("%d ",i);
        i++;
    }

    // int n;
    // for(int i=20;i<=30;i++)
    // {
    //     printf("Enter a no:");
    //     scanf("%d",&n);

    //     if(n%3==0)
    //     {
    //         // break;
    //         continue;
    //         printf("find that number which is divisible by 3");
    //     }
    // }

    printf("\n");
    int j=11;
    while(j<=15)
    {
        printf("%d ",j);
        j++;
    }

    int k=0;
    while(k>5)
    {
        printf("%d ",k);
        k--;
    }

    while(0)  // 0 - false any thing else - true
    {
        printf("\nHello");
    }

    printf("\n");
    int c=20;
    do{
        printf("%d ",c);
        c++;

    }while(c<30);

    printf("\n");
    c=10;
    do{
        printf("%d ",c);
        c++;
    }while(c>20);
    
    
}

/*

1. print 20 to 30 using all loops.
2. print multiplication table of user given input using all loops.
    n - 5

    5 * 1 = 5
    5 * 2 = 10
    .
    .
    .
    5 * 10 = 50



*/

