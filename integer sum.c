#include <stdio.h>
int main()
{

    int a,b,sum;
    printf("enter two numbers you want to add:");
    scanf("%d %d" ,&a,&b);
    sum=a+b;

    printf("%d+%d=%d",a,b,sum);
    return 0;
}