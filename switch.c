#include<stdio.h>

// print week days according to number.

void main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            
        case 2:
            printf("Tuesday");
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
        case 5:
            printf("Friday");
        case 6:
            printf("Satuarday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid choice");
        

    }

}


/*

1. print week days according to number.
2. Print days of month using switch case
    1 -> 31 days
    2-> 28/29 days
    3 -> 31 days
    4 -> 30 days
3. Make Hotel Menu.
    

*/