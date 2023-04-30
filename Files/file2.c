

#include<stdio.h>
void main()
{
    FILE *f1;
    f1 = fopen("abc.txt","r");
    char name[100];

    if(f1==NULL)
    {
        printf("Can't open file");
    }
    else{
        while(!feof(f1))
        {
            fscanf(f1,"%s",name);
            printf("%s\n",name);
        }

    }
    fclose(f1);

}