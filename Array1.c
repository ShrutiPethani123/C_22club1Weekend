/*

Array:

-> collection of similar type of data
-> All elements have continuos Memory location

2 3 1 56 78 12

0 1 2 3  4  5

-> index start with 0
-> index end with size-1

a[2] = 1
a[3] = 56
a[60] = Garbage value



*/

#include<stdio.h>

void main()
{
    int a[5]={4,89,75,63,14};

    // printf("\n%d",a[2]);
    // printf("\n%d",a[4]);
    // printf("\n%d",a[20]);
    // printf("\n%d",a[56]);
    // printf("\n%d",a[5]);


    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    int b[6];

    for(int i=0;i<6;i++)
    {
        printf("b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",b[i]);
    }

}

/*

1. Intialize the array and print that array and Take one array from user and print that array.
2. Take one array from user and count total number of Negative elements and print all negative element also.
3. Take one array from user and print sum of all element.
4. Take one rray from user and count total number of odd and even element.
5. Find maximum element from array.
6. Take one array from user and copy one array from another array.

    a - 4 5 7 8 6
    b - 4 5 7 8 6

7. Store all even element into even array and all odd element into odd array.

    a- 4 7 8 1 2 6 3 5 
    odd[]  - 7 1 3 5
    even[] - 4 8 2 6

8. Take one array from user and search element into array.

    a - 8 5 6 3 1

    ele: 5 -> present at location 2
    ele: 9 -> not found

9. Take one array from user and insert element in array.

    a - 8 5 6 3 1

    ind: 4
    el: 9

    o/p : 8 5 6 3 9 1

    n-5
    a[n+1]

10. Take two array from user and perform user given operation

    a - 4 5 7 8 6
    b - 2 3 6 

    -> size not same

    a - 2 4 5 8 6
    b - 2 3 5 6 4

    1. Add
    2. sub
    3. mul
    4. div
    5. exit

    1. c - 4 7 10 14 10



*/