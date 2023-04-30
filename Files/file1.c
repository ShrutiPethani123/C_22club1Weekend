/*

1. text file (.txt)
2. binary file (.bin)

Mode:

r
w
a

r+
w+
a+

fopen
fclose
fprintf
fscanf
feof
fgetc
fputc
fgets
fputs



*/


#include<stdio.h>
void main()
{
    FILE *f1;
    f1 = fopen("abc.txt","w");
    char name[100];
    printf("Enter name: ");
    scanf("%s",name);

    if(f1==NULL)
    {
        printf("Can't open file");
    }
    else{
        fprintf(f1,"Hello.........");
        fprintf(f1,"%s\n",name);
    }
    fclose(f1);

}