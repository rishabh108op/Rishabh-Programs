#include<stdio.h>
#include<math.h>
#define pi 3.1428
int main()
{
    float num,deno,x,degree,sum,term;
    printf("enter the degree");
    scanf("%f",&degree);
    x=degree*pi/180;
    sum=0;
    num=x;
    deno=1;
    int i=1;
    do
    {
        term=num/deno;
        sum=sum+term;
        num=-num*x*x;
        i=i+2;
        deno=deno*i*(i-1);
    } while (fabs(term)>0.00000);
    printf("\nsin ka value%0.3f\n",sum);
    
    return 0;
}