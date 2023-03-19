#include<stdio.h>

void main()
{
    int size;
    printf("Enter a size: ");
    scanf("%d",&size);

    int a[size];
    int f[size];

    for(int i=0;i<size;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
        f[i]=-1;
    }

    printf("\nArray:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    int count;
    for(int i=0;i<size;i++)
    {
        count=1;
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }

        if(f[i]!=0)
        {
            f[i]=count;
        }
        
    }

    printf("\nFrequency of Array:");
    for(int i=0;i<size;i++)
    {
        if(f[i]!=0)
        {
            printf("\n%d - %d ",a[i],f[i]);
        }
        
    }



}