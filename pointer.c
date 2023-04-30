/*

pointer: store the address of another variable.



*/

#include<stdio.h>

void main()
{
   int a=50;
   printf("\n%d",a); 
   printf("\n%d",&a);

//    int *p=&a;
    int *p;
    p=&a;

   printf("\n%d",p);
   printf("\n%d",*p);
   printf("\n%d",&p);

   int **q = &p;
   printf("\n%d",q);
   printf("\n%d",*q);
   printf("\n%d",**q);

   **q = 400;
//    **q = *p;
   printf("\n%d",a); 
   printf("\n%d",*p); 


}

/*


1. Take one array from user and count total number of even element from array using function.

int countEven(int a[],int n)
{

}

int* countEven(int *a,int n)
{
   

   return a
}

countEven(b,)

2. Pass two arguement in function and change the first argument with sum and second argument with multiplication.

a: 3
b: 5

a: 8
b: 15


int change(int *a, int *b)
{

int t=*a;
   *a=*a+*b;
   *b=t * *b;

}

3. Take one array from user and reverse that array using function.

a: 5 8 9 6 3 
a: 3 6 9 8 5


*/