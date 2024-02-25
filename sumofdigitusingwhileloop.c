#include<stdio.h>
int gcd(int x, int y);
int main()
{
    int a,b,hcf,lcm;
    printf("enter value of a and b");
    scanf("%d %d",&a,&b);
    hcf=gcd(a,b);
    lcm=a*b/hcf;
    printf("hcf=%d\n",hcf);
    printf("lcm= %d\n",lcm);
    return 0;
}
int gcd(int x, int y)
{
    if(y==0)
    return x;
    else
    return(gcd(y,x%y));
}
