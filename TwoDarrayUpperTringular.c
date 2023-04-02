#include<stdio.h>

void main()
{
    int row,col;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter col: ");
    scanf("%d",&col);
    int a[row][col];

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

        int isUpper=0;
        // for(int i=0;i<row;i++)
        // {
        //     for(int j=0;j<col;j++)
        //     {
        //         if(i>j && a[i][j]!=0)
        //         {
        //             isUpper=1;
        //             break;
        //         }
        //     }
        // }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i][j]!=0)
                {
                    isUpper=1;
                    break;
                }
            }
        }

        if(isUpper==0)
        {
            printf("Upper Tringular Matrix!!");
        }else{
            printf("Not Upper Tringular!!");
        }

        

}