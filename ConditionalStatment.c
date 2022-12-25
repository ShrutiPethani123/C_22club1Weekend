/*
1. if else
2. switch
3. loop


--> if else

    simple if
    else if
    nested if
    else if ladder


*/

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);

    if(n>0)
    {
        if(n>10)
        {
           printf("\n%d is greater than 10 and positive",n); 
        }
        printf("\n%d is positive",n);
    }else if(n==0)
    {
        printf("ZERO");
    }
    else{
        printf("%d is negative",n);
    }
}

/*

1. Take two number from user and print maximum number between them.
    5 , 6  -> max=6

2. Take Three number from user and print minimum number between them.
    5 , 6  , 8 -> min=5

3. Take one number from user and check number is odd or even.
    4 - even
    3 - odd

4. Take one number from user and  check number is divisible by 11 or not.

5. Take one character from user and check character is vowel or consonant.
    vowel - A,E,I,O,U,a,e,i,o,u
    consonant - ...

6. Take one character from user and print the character is alphabet , number or special character.

    a to z , A to Z -> alphabet
    0 to 9 -> number
           -> special character

7. Take month number from user and print days of that month.

    1 to 12 

    1 -> 31 days
    2 -> 28 days
    3 -> 31 days


8. Write  a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, 
calculate percentage and grade according to given conditions:
	If percentage >= 90% : Grade A
	If percentage >= 80% : Grade B
	If percentage >= 70% : Grade C
	If percentage >= 60% : Grade D
	If percentage >= 40% : Grade E
	If percentage < 40%  : Grade F

9. count total no of notes in given amount - 1552
	500 - 3
	200-0
	100-0
	50 - 1
    20 -0
	10-0
	5 - 0
	1 - 2

    amt - 2036
    
    500 - 4
    200 - 0
    100 - 0
    50 - 0
    20-  1
    10 - 1
    5 -  1
    1 -  1

10. Take input from user in seconds and convert into hours , min and sec.

    sec = 190056

    52:47:36  -> (52*3600 + 47*60 + 36)

11. Write a program to input electricity unit charge and calculate the total 
	electricity bill according to the given condition:

	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit

	300 
	50 - 0.50 = 25
	100 - 0.75=75
	100 - 1.20 = 120
	50 - 1.50  = 75   
    
    total  bill- 295

    -> 20

    20 - 0.50 = 10

    total bill - 10

    -> 120

    25 + 70*0.75 = > 77.5



*/