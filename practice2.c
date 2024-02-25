#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define size 100
int top=-1;
float s[size];
int main()
{
    char suffix[50],symbol;
    float op1,op2,res;
    enter suffix e

}
void push(float ele)
{
    if(top==size-1)
    {
        printf("Stack overflow");
    }
    else{
        top++;
        s[top]=ele;
    }
}
float push()
{
    float del;
    del=s[top];
    top--;
    return del;
}
float evaluate(char op,float op1,float op2)
{
    switch(op)
    {
        case '+':return (op1+op2);
    }
}