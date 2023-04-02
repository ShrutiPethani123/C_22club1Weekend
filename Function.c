/*
Types:

1. built in function(Pre drfine function)
    -> printf() , scanf()
2. User define function (UDF)
    1. with return type with argument
    2. without return type without argument
    3. with return type without argument
    4. without return type with argument


1. declaration
2. defination
3. calling

syntax:

returnType Function_name(Arguments)
{
    // block of code
}

int add(int c,int d)
{
    return c+d;
}

*/

#include<stdio.h>

// void display()
// {
//     printf("Hello.....");
// }
// declaration
void display();



int add(int a,int b)
{
    return a+b;
}

void mul(int a,int b)
{
    printf("\nMul: %d",a*b);
}

int isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}

void main()
{
    display(); // calling
    display();
    int x = add(2,40);
    printf("\nSum is %d",x);
    printf("\nSum is.......... %d",add(4,5));
    mul(3,6);

    int n = 9;

    if(isPrime(n)==1)
    {
        printf("\nPrime Number!!");
    }else{
        printf("\nNot Prime!!");
    }
}

//defination
void display()
{
    printf("Hello.....");
}

/*
1. Take two values from user and perform below operation.

1. sum
2. mul
3. sub
4. div
5. mod
6. USD to INR
7. INR to USD


2.  Take one number from user and check that number is prime or not ?

    int isPrime(int n){
        // return 1: prime
        // return 0 : prime not
    }

3. Take one number from user and check that nuber is palindrom or not.

4. Take two number from user and print all even numbers between that rang using function.

void printEven(int c , int d)
{

}

5. Take one number from user and find factorial of that number using function.

int fact(int n)
{

}

*/