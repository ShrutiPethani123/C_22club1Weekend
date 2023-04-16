/*

String: sequence of character

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{

    char name[10];
    char name2[10];
    printf("Enter name: ");
    // scanf("%s",name);
    // printf("Name is %s",name);

    gets(name);
    puts(name);

    printf("\nString length: %d ",strlen(name));
    printf("\nUpper String: %s",strupr(name));
    printf("\nLower String: %s",strlwr(name));
    // printf("\nReverse String: %s",strrev(name));
    printf("\nString concate: %s\n",strcat(name,"patel"));
    strcpy(name2,name);
    puts(name2);

    // puts(name);

    // for(int i=0;i<strlen(name);i++)
    // {
    //     printf("\n%c",name[i]);
    // }

    int i=0;
    while(name[i]!='\0')
    {
        printf("\n%c",name[i]);
        i++;
    }
}

/*
1. Take one string from user and print length of that string without using inbult function.

2. Take one string from user and count total number of vowels and consonant.

str: Good Morning123

vowels:4
consonants: 7

3. Take one string and after that take one character from user and check find that character index in String if not present that print charcater is not found!!

str = "Python"

ch: t -> 2
ch: f -> not found!!

4. find last index of character.

str: Good Python
ch: o --> 9

5. Check String is Palindrom or not without using any pre define function.


*/