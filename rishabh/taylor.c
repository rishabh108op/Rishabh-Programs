#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float degree,x,term,sum,num,deno;
    int i=1;
    printf("enter a degree");
    scanf("%f",&degree);
    x=degree*(PI/180);
    num=x;
    deno=1;
    sum=0;
    do
    {
        term=num/deno;
        sum=sum+term;
        i=i+2;
        num=-num*x*x;
        deno=deno*i*(i-1);
    }
    while(fabs(term)>0.00000);
    printf("taylor series value of sin(%0.0f)=%0.4f\n",degree,sum);
    printf("%0.4f",sin(x));
    return 0;
}