#include<stdio.h>
void sum();
int main()
{
    printf("going to print the sum of numbers\n*************************************\n");
    sum();
}
void sum()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf ("the sum is=%d",a+b);    
}