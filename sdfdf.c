#include<stdio.h>
int main()
{
    char suffix[50],symbol;
    float op1,op2,res;
    prinrf("Enter seffix equation");
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
            op2=pop();
            res=evaluate(symbol,op1,op2);
            push(res);
        }
    }
    res=pop()
}