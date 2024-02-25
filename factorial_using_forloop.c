#include<stdio.h>
int main()
{
    int i,p,fact=1;
    printf("enter the number");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",p,fact);
    return 0;
}