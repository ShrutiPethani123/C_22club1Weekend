/*
Array:

1D
2D
 
    0 1 2
0-  1 2 3
1 - 4 1 2

rows:2
col:3

2*3
row*col


a[0][0]= 1
a[1][0] = 4

a[row][col]



*/

#include<stdio.h>

void main()
{
    // int a[2][3]={0,1,2,3,4,5};
    // int a[2][3]={{0,1,2},{3,4,5}};

    // for(int i=0; i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n%d",a[1][1]);
    // printf("\n%d",a[1][2]);
    // printf("\n%d",a[0][1]);




    int a[3][2];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


/*

1. Intialize 2D array and print that array.
2. Take one 2D array from user and print that array.
3. 



*/