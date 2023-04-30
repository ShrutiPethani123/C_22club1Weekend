

#include<stdio.h>
void main()
{
    FILE *f1;
    f1 = fopen("abc.txt","r");
    char name[100];
    char ch;

    if(f1==NULL)
    {
        printf("Can't open file");
    }
    else{
        // while(!feof(f1))
        // {
        //     ch = fgetc(f1);
        //     printf("%c",ch);
        // }

        while(!feof(f1))
        {
            fgets(name ,100,f1);
            printf("%s\n",name);
        }

    }
    fclose(f1);

}