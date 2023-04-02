#include<stdio.h>

void main()
{
    int row,col;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter col: ");
    scanf("%d",&col);
    int a[row][col];

    if(row==col)
    {
        printf("Enter elements for array: \n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                    printf("a[%d][%d]: ",i,j);
                    scanf("%d",&a[i][j]);
            }
        }

        printf("\nArray: \n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        printf("\nPrimary diagonal: ");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==j)
                    printf("%d ",a[i][j]);
            }
        }

        printf("\nPrimary diagonal: ");
        for(int i=0;i<col;i++)
        {
            printf("%d ",a[i][i]);
        }

        printf("\nSecondary diagonal: ");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==row-j-1)
                    printf("%d ",a[i][j]);
            }
        }

        printf("\nSecondary diagonal: ");
        for(int i=0;i<col;i++)
        {
            printf("%d ",a[i][col-i-1]); 
        }

    }else{
        printf("Invalid input!!");
    }
}