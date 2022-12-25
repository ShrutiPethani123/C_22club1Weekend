/*
1. Gujarati
    1. Roti
        1. plain Roti
        2. Butter Roti
        3. Tandoori Roti
    2. Sabji
        1.
        2.
        3.
    3. Sweet
2. South Indian
3. Punjabi
4. Fast Food
5. Italian

5*3*3 -> 45


*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int qty,bill,choice, gujaratiChoice, rotiChoice;

    while (1)
    {
        printf("\n-------------------------------------");
        printf("\n0.Exit");
        printf("\n1.Gujarati");
        printf("\n2.South Indian");
        printf("\n3.Punjabi");
        printf("\n4.Fast Food");
        printf("\n5.Italian");
        printf("\n-------------------------------------");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nYou selected Gujarati Menu");
            printf("\n1.Roti");
            printf("\n2.Sabji");
            printf("\n3.Sweet");
            printf("\nEnter your choice: ");
            scanf("%d", &gujaratiChoice);
            switch (gujaratiChoice)
            {
            case 1:

                printf("\nYou selected Roti in  Gujarati Menu");
                printf("\n1.Plain Roti - 10");
                printf("\n2.Butter Roti - 20");
                printf("\n3.Tandoori Roti - 30");
                printf("\nEnter your choice: ");
                scanf("%d", &rotiChoice);
                switch (rotiChoice)
                {
                case 1:
                    printf("\nYou selected  Plain Roti in  Gujarati Menu");
                    printf("\nEnter quanity: ");
                    scanf("%d",&qty);
                    bill=qty*10;
                    printf("Your Total bill is %d",bill);
                    break;
                case 2:
                    printf("\nYou selected  Butter Roti in  Gujarati Menu");
                    printf("\nEnter quanity: ");
                    scanf("%d",&qty);
                    bill=qty*20;
                    printf("Your Total bill is %d",bill);
                    break;
                case 3:
                    printf("\nYou selected  Tandoori Roti in  Gujarati Menu");
                    printf("\nEnter quanity: ");
                    scanf("%d",&qty);
                    bill=qty*30;
                    printf("Your Total bill is %d",bill);
                    break;
                default:
                    printf("\nInvalid choice!!!");
                    break;
                } // end of roti switch

                break;
            case 2:
                printf("\nYou selected Sabji in  Gujarati Menu");
                break;
            case 3:
                printf("\nYou selected Sweet in  Gujarati Menu");
                break;
            default:
                printf("\nInvalid choice!!!");
                break;
            }
            break;
        case 2:
            printf("\nYou selected South Indian Menu");
            break;
        case 3:
            printf("\nYou selected Punjabi Menu");
            break;
        case 4:
            printf("\nYou selected Fast Food");
            break;
        case 5:
            printf("\nYou selected Italian Menu");
            break;
        default:
            printf("\nInvalid choice!!!");
        }
    }
}