#include<stdio.h>
#include<math.h>
#define pi 3.1428
int main()
{
    
    float num,deno,term,sum,x,degree;
    int i=1;
    printf("enter degree");
    scanf("%f",&degree);
    x=degree*pi/180;
    sum=0;
    deno=1;
    num=x;
    do
    {
        term=num/deno;
        sum=sum+term;
        i=i+2;
        num=-num*x*x;
        deno=deno*i*(i-1);
    }
    while(fabs(term)>0.00000);
    printf("sin value is %0.3f",sum);
    return 0;

}