// nested loop - loop inside loop

#include<stdio.h>

void main()
{

    // int k;
    // for(int i=1;i<=5;i++)
    // {
    //     k=i;
    //     for(int j=1;j<=5;j++)
    //     {
            
    //         printf("%d ",k);
    //         k=k+5;
    //     }
    //     printf("\n");
    // }


    // for(int i=65;i<=68;i++)
    // {
    //     for(int j=1;j<=4;j++)
    //     {
    //         printf("%c ",i);
    //     }
    //     printf("\n");
    // }

    // for(char i='A';i<='D';i++)
    // {
    //     for(int j=1;j<=4;j++)
    //     {
    //         printf("%c ",i);
    //     }
    //     printf("\n");
    // }

    // int n=7;
    // int k;
    // for(int i=1;i<=n;i++)
    // {
    //     k=i;
    //     for(int j=1;j<=i;j++)
    //     {
            
    //         printf("%d ",k);
    //         k=k+(n-j); // 
    //     }
    //     printf("\n");

    // }

    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }


}

/*

12.

1
2 6  (4)
3 7 10 (4 , 3)
4 8 11 13 (4 , 3, 2)
5 9 12 14 15 ( 4 , 3 , 2 ,1)

*/

/*

1. 

1 2 3 4
5 6 7 8
9 10 11 12

2.

1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16

3.

12 11 10 9
8 7 6 5
4 3 2 1

4.

0 1 0 1 
0 1 0 1
0 1 0 1
0 1 0 1

5.

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8

6.

1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25

7.

A A A A 
B B B B
C C C C 
D D D D 



8.

A B C D
E F G H
I J K L 
M N O P
Q R S T
U V W X

9.

A E I M 
B F J N
C G K O
D H L P

10.

*
**
***
****
*****

11.

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

12.

1
2 6 
3 7 10
4 8 11 13
5 9 12 14 15

14.

*****
****
***
**
*

15.

A B C D
E F G
H I 
J

16.

* * * *
*     *
*     *
* * * *

* * * * *
*       *
* * * * *









*/