#include<stdio.h>
int main()
{
    int opd1,opd2,answer;
    char op;
    printf("enter an operator");
    scanf("%c",&op);
    printf("Enter two integers:");
    scanf("%d%d",&opd1,&opd2);

    if (op=='+')
    {
        answer= opd1+opd2;
    }
    else if(op=='-')
    {
        answer= opd1-opd2;
    }
    else if(op=='*')
    {
        answer=opd1*opd2;
    }
    else if (op=='/')
    {
        if(opd2==0)
        {
            printf("division not possible");
            return (1);
        }
        else
        {
        answer=opd1/opd2;
        }
    }
        else if (op=='%')
    {
        if(opd2==0)
        {
            printf("division not possible");
            return (1);
        }
        else
        {
        answer=opd1 % opd2;
        }
    }
    
    


   printf("answer=%d",answer);
    return 0;
}