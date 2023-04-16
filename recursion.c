/*

recursion: function calling itself

5! = 5*4*3*2*1 = 5*4! = 5*4*3! = 5*4*3*2! = 5*4*3*2*1!

*/

#include <stdio.h>
// int fact(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     return n*fact(n-1);
// }

// void main()
// {
//     int ans = fact(6);
//     printf("Answer is : %d",ans);
// }

// 2.

void printNum(int n)
{
    if (n == 1)
    {
        printf("%d ", n);
        return;
    }
    printNum(n - 1);
    printf("%d ", n);
    
}

void main()
{
    printNum(10);
}


// print number from 1 to 10 using recusrsion.
// Print fibonacci series using recursion (0 1 1 2 3 5 8 13....)