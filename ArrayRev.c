#include<stdio.h>

void rev(int *x,int n)
{
    // int start=0, end=n-1;

    // while(start<=end)
    // {
    //     int temp = x[start];
    //     x[start]=x[end];
    //     x[end]=temp;
    //     start++;
    //     end--;
    // }

    for(int i=0;i<=n/2;i++)
    {
        int t= x[i];
        x[i] = x[n-1-i];
        x[n-1-i]=x[i];
        
    }
}

void main()
{
    int a[]={2,4,1,6,8,9,4};
    rev(a,7);
    for(int i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }

}