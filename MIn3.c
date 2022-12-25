#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d %d %d",&a,&b,&c);


    if(a<b)  // 
    {
        if(a<c)
        {
            printf("%d is smaller",a);
        }else{
            printf("%d is smaller",c);
        }
    }else{ //b<a
        if(b<c)
        {
            printf("%d is smaller",b);
        }else{
            printf("%d is smaller",c);
        }
    }



    // if(a<b && a<c)
    // {
    //     printf("%d is smaller",a);
    // }else if(b<a && b<c)
    // {
    //     printf("%d is smaller",b);
    // }else{
    //     printf("%d is smaller",c);
    // }
}