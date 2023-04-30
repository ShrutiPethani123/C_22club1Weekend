
#include<stdio.h>
void main()
{
    FILE *f1;
    f1 = fopen("abc.txt","a");
    char name[100]=" Royal.....";

    if(f1==NULL)
    {
        printf("Can't open file");
    }
    else{
        // for(int i=0;i<5;i++)
        // {
            // fputc(name[i],f1);
        // }

        fputs(name,f1);
    }
    fclose(f1);

}