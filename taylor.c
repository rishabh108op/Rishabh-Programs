#include<stdio.h>
#include<math.h>
#define PI 3.14285
int main()
{
    float x,degree,num,deno,sum,term;
    printf("enter a degree");
    scanf("%f",&degree);
    x=degree*(PI/180);
    num=1;
    deno=1;
    sum=0;
    int i=1;
    do
    {
        term=num/deno;
        sum=sum+term;
        i=i+1;
        num=-num*x*x;
        deno=deno*i*(i-1);
    } while (fabs(term)>0.00000);

    printf("%0.3f",sum);
    
    return 0;
}