#include<stdio.h>
int btod(int x);
int main()
{
    int a,res;
    printf("enter the binary number");
    scanf("%d",&a);
    res=btod(a);
    printf("the decimal value is %d\n",res);
    return 0;
}
int btod(int x)
{
    if(x==0)
    return (0);
    else
    return((x%10)+btod(x/10*2));
}
