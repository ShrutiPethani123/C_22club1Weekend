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

3. Take one number form user and count digit of that number.

    n = 2342 
    digit- 4

4. find first and last digit of number.

    n = 764573
    first - 7
    last - 3

5. print sum of digit of number.

    n= 2231
    sum = 2+2+3+1 = 8

6. print reverse of number.

    n= 2231
    rev = 1322

7. check number is palindrom or not.

    palinrom - 12321 , 121, 666 ,9
    not palinrom - 46236 ,65347 

8. Check number is armstrong number.

    123 -> 1^3 + 2^3 + 3^3 = 1+8+27 = 36   123!=36 -> no
    153 -> 1+125+27 = 153 -> yes

    5
    len=1
    5^1 = 5


    1634 = 1+ 1296 + 81 + 256 = 1634;

9. find factorial of number.

    5 - 5*4*3*2*1 = 120


10. find factor of user given number.

    n = 12 -> 1 2 3 4 6 12
    n = 15 -> 1 3 5 15 





*/

