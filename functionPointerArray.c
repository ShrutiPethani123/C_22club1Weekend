#include<stdio.h>

// void square(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         a[i]=a[i]*a[i];
//     }
// }

int* squareArray(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        *(p+i) = (*(p+i)) *  (*(p+i));
    }
    return p;
}

void main()
{
    int a[5]={10,20,30,40,50};
    int *q = squareArray(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(q+i));
    }


}