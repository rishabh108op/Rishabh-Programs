#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,result;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    result=sum(a,b);
    printf("the result is %d",result);
}
int sum(int a,int b)
{
    int r;
    r=a+b;
    return r;
}