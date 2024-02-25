#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define max 50
int top=-1;
float s[max];
int main()
{
    char suffix[50],symbol;
    float op1,op2,res;
    printf("Enter suffix Expression\n");
    scanf("%s",suffix);
    for(int i=0;suffix[i]!='\0';i++)
    {
        symbol=suffix[i];
        if(isdigit(symbol))
        {
            push(symbol-'0');
        }
        else
        {
            op2=pop();
            op1=pop();
            res=evaluate(symbol,op1,op2);
            push(res);
        }
    }
    res=pop();
    printf("The result is %f",res);
    return 0;
}
void push(float ele)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        s[top]=ele;
    }
}
float pop()
{
    float del;
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        del=s[top];
        top--;
    }
    return del;
}
float evaluate(char op,float aop1,float aop2)
{
    switch(op)
    {
        case '+': return (aop1+aop2);
        case '-': return (aop1-aop2);
        case '*': return (aop1*aop2);
        case '/': return (aop1/aop2);
        case '%': return fmod(aop1,aop2);
        case '^': return pow(aop1,aop2);
        default: printf("\nInvalid Operator\n");
    }
}
