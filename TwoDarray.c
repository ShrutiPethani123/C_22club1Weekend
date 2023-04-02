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
3. Take one 2D array from user 
    check if rows and cols are same then print Primary and secondary diagonal
    else print invalid input.

   r -  2
   c - 3

   invalid input.

   r-3
   c-3

   5 6 9
   1 2 3
   8 6 4

   00 01 02
   10 11 12
   20 21 22

    PD: 00 11 22 (i=j)
    SD: 02 11 20 (i+j=n-1) 


   PD: 5 2 4
   SD: 9 2 8


4. Take one 2D array from user and copy one array to another.

a -

4 5 6
1 2 3

b

4 5 6
1 2 3

5. Print transpose of matrix.


1 2 3
4 5 6

2*3

1 4
2 5
3 6

3*2

6. Take one array from user and store transpose matrix in another array.

4 5 6
7 8 9
1 2 3
9 5 4

A(4*3)

4 7 1 9
5 8 2 5
6 9 3 4

B(3*4)

7. check the matrix is upper tringular or not ?

4 5 6
0 1 2
0 0 3


00 01 02
10 11 12
20 21 22  (row>col)

4 5 96 1
0 2 3 6
0 0 3 0
0 0 0 3

-> upper tringular


8. Take one 2D array from user and convert that matrix into lower tringular matrix.

4 5 6
1 2 3
7 8 6

4 0 0
1 2 0
7 8 6


9. Take one array form user and check if it is lower tringular then sum of lower tringular matrix otherwise 
print it is not lower tringular.

1 0 0
2 0 0
3 2 1

sum:9 


10. print sum of all rows and all cols.

1 2 3
4 3 6
1 6 5

1st row: 6
2nd row: 13
3rd row : 12

1st col:6
2nd col: 11
3rd col: 14

*/