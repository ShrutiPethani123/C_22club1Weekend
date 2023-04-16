// swap two number using function.

#include<stdio.h>

// void swap(int x , int y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
//     printf("\nAfter swap a= %d....... b=%d",x,y);

// }

void swap(int *x , int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

    // *x=30;
    // *y=40;
    
}

void main()
{
    int a=10,b=20;
    printf("\nBefore swap a= %d  b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap a= %d  b=%d",a,b);

}