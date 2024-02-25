#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,s,real,imaginary;
    printf("enter the coefficient of the quadratic equation");
    scanf("%f%f%f",&a,&b,&c);
    s=(b*b)-4*a*c;
    if (a==0)
    {
        printf("a should not be equal to zero");
        return 1;
    }
    else if(s=0)
    { 
        
            r1=r2=(-b)/(2*a);
            printf("the roots are real and equal");
            printf("r1= %f,r2=%f",r1,r2); 
        
    }
    else if(s>0)
    {
        r1=(-b)/(2*a)+(sqrt(s)/(2*a));
        r2=(-b)/(2*a)-(sqrt(s)/(2*a));
         printf("the roots are real and distinct");
            printf("r1= %f,r2=%f",r1,r2); 

    }
    else
    {
         r1=(-b)/(2*a)+i(sqrt(s)/(2*a));
        r2=(-b)/(2*a)-i(sqrt(s)/(2*a));
         printf("the roots are imaginary");
            printf("r1= %f,r2=%f",r1,r2); 
    }
    

    return 0;

}