#include<stdio.h>

// int fibonacci(int n)
// {
//     if(n<=1)
//         return n;

//     return fibonacci(n-1)+fibonacci(n-2);

// }

// void main()
// {
//     for(int i=0;i<=10;i++)
//     {
//        printf("%d ",fibonacci(i));
//     }
// }


void fib(int n , int first , int second)
{
    if(n==0)
    {
        return;
    }
    printf("%d ",first);
    fib(n-1,second, second+first);
}

void main()
{
    int n=10;
    int first=0 ,second=1;
    fib(n,first,second);

}