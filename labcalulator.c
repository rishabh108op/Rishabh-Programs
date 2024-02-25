#include<stdio.h>
int main()
{
    int opd1,opd2;
    char op;
    printf("enter the opd1\n");
    scanf("%d",&opd1);
    printf("enter the opd2\n");
    scanf("%d",&opd2);
    printf("enter the operator\n");
    scanf(" %c",&op);
    if(op=='+')
    {
        printf("sum = %d",opd1+opd2);
    }
    else if(op=='-')
    {
        printf("subtraction = %d",opd1-opd2);
    }
    else if(op=='*')
    {
        printf("multiplication = %d",opd1*opd2);
    }
    else if(op=='/')
    {
        if(opd2==0)
        {
            printf("division not possible");
        }
        else
        printf("division = %d",opd1/opd2);
    }
    else if(op=='%')
    {
        if(opd2==0)
        {
            printf("modulus not possible");
        }
        else
        printf("modulus = %d",opd1%opd2);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}