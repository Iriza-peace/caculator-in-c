#include<stdio.h>
#include<conio.h>

main()
{
int ch,a,b,sol;
    printf("\t****************************************************************************************");
    printf("\n ************************************MENU***********************************************");
    printf("\n\t(1)ADDITION");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n\t(2)SUBTRACTION");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n\t(3)Multiplication");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n\t(4)DIVISION");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n\t(5)REMAINDER");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n\t(0)EXIT");
    printf("\n****************************************************************************************");
    printf("\n\tEnter your choice!");
    scanf ("%d",&ch);
    if(0<ch<=5)
    {
        printf("Enter the two numbers\n");
        scanf("%d %d",&a,&b);
        switch(ch)
        {
    case 1:
        sol=a+b;
        printf("\n ADDITION:%d",sol);
        break;

        case 2:
            sol=a-b;
            printf("\n SUBTRACTION:%d",sol);
            break;
            case 3:
            sol=a*b;
            printf("\n Multiplication:%d",sol);
            break;

            case4:
                sol=a/b;
                printf("\n DIVISION:%d",sol);
                break;
        case 5:
            sol=a%b;
            printf("\n REMAINDER:%d",sol);
            break;
            case 0:;
            printf("\n EXIT SINCE IT IS TERMINATED:%d");
            break;
            default:;
            printf("Invalid choice!");
    }
    getch();
}
}