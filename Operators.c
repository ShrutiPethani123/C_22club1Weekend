/*
Datatypes 
Operators

Arithmetic  --> + - * / %
Relational --> > < >= <= == !=
Assignment  --> = += -= *= /= %= &= |=  
Logical Operator --> && || !
bitwise --> & | ^ ~ << >>
inc/ dec operator --> ++ --
ternary operator --> ? :

T-1
F-0

&&

A   B   A&&B
F   F   F
F   T   F
T   F   F
T   T   T


||


A   B   A||B
F   F   F
F   T   T
T   F   T
T   T   T

^


A   B   A||B
F   F   F
F   T   T
T   F   T
T   T   F

// binary to decimal 

512 256   128    64    32     16     8    4    2    1                    

1010 = 10
1110 = 14
1111 = 15
1101 = 13

 1*2^3 + 1*2^2  +  0*2^1 + 1*2^0   = 8 + 4 + 0 + 1 = 13

1010101 = 0101 0101 = 64+16+4+1= 85
10111 = 23 

// decimal to binary

12 - 1100
17 - 10001
124 - 0111 1100
15 - 1111
78 - 0100 1100



Conditional Statment
    - if else
    - switch
    - loops





*/

#include<stdio.h>

void main()
{
    // int a=5,b=2;
    // printf("\n%d",a); // 50
    // printf("\n%d",a++); //50
    // printf("\n%d",a); // 51
    // printf("\n%d",++a); //52
    // printf("\n%d",a);     // 52

    // int c= a++ + a++ + ++a; // 5(a=6) + 6(a=7) + 8(a=8)= 5+6+8 = 19
    // int c= a++ + b++ + ++a + ++b; // 5(6)+2(3)+7(7)+4(4) = 5+2+7+4 = 18
    // int c = a++ + a++ + b++ + b++ + ++b + ++a;
    // printf("\n%d",c); 

    // int c=5,d=60,t=20;
    // int f= c>d && c<t; //0 && 1
    // printf("%d",f);

    // int g = c++>d && t-- >c; //5>60 && 20>6 // 0 && 1 = 0
    // printf("\n%d",!g); // 1
    // printf("\n%d",c); // 6
    // printf("\n%d",t); // 19

    // int c= 11 ; // 1011
    // int h = 6; //  0110
    // // int d=c&h; //  0010 - 2
    // // int d=c|h; // 1111
    // // int d=c^h; // 1101
    // int d=17; // 0001 0001 -> 0010 0010 - 34
    // printf("\n%d",d<<1);
    // printf("\n%d",d<<2);
    // printf("\n%d",d>>1);
    // printf("\n%d",d>>2);

    int a=304;
    int b=67;
    int max;

    // if(a>b)
    // {
    //     max=a;
    // }else{
    //     max=b;
    // }

    max = a>b ? a : b; 
    printf("\n%d",max);

    

    


}