#include<stdio.h>
int findMax(int a[], int n);
void findPairs(int a[],int n);

void main()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d",&n);

    int a[n];
    printf("Enter elements: \n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("Array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int max = findMax(a,n);
    printf("\nMaximum element is: %d ", max);

    // int x = sizeof(a)/sizeof(a[0]);
    // printf("\n%d",x);
    // findPairs(a,n);

    printf("Enter element: ");
    int ele;
    scanf("%d",&ele);
    if(search(a,n,ele))
    {
        printf("Element present at index %d",search(a,n,ele));
    }else{
        printf("Not Found!!");
    }
    
}

int findMax(int b[], int n)
{
    int max=b[0];
    for(int i=0;i<n;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    return max;

}

void findPairs(int b[],int n)
{
  
}

int search(int a[], int n , int ele)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            return i;
        }
    }
    return 0;

}

/*


1. make one function that take argument as array and find sum of that array.

2. Make one function to print all the pairs of array.

a - 5 8 9 1 2

(5,8) (5,9) (5,1) (5,2)
(8,9) (8,1) (8,2)
(9,1) (9,2)
(1,2)

3. Make one function to print all the sub array of array.

a - 1 5 9 6 3

1 15 159 1596 15963
5 59 596 5963
9 96 963
6 63 
3


4. Make one function to print maximum sum of sum array of array.

a - 1 5 -9 6 3

1 15 15-9 15-96 15-963 (1,6,-3,3,6)
5 5-9 5-96 5-963 (5,-4,2,5)
-9 -96 -963 ( -9 , -3 , 0)
6 63  (6,9)
3 (3)


maximum sum: 9

5. Make one function that accepts array as argument and return element index if present.

a - 5 9 63 1 2 4 5
ele: 63  (2 nd index)
ele: 50  (-1)




*/