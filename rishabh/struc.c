#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,real,img;
    printf("enter the coefficient");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(a==0)
    {
        printf("a cannot be zero");
    }
    else
    {
        if(d==0)
        {
            printf("\nroots are real and equal\n");
            r1=r2=-b/(2*a);
            printf("\nthe roots are r1=%f and r2=%f\n",r1,r2);

        }
        else if(d>0)
        {
            printf("\nroots are distinct and real\n");
            r1=(-b/(2*a))+(sqrt(d)/(2*a));
            r2=(-b/(2*a))-(sqrt(d)/(2*a));
            printf("root 1= %f and root 2=%f\n",r1,r2);
        }
        else
        {
            printf("roots are imaginary\n");
            real=(-b/(2*a));
            img=(sqrt(-d)/(2*a));
            
            printf("root 1 is %f + i %f\n",real,img);
            printf("root 2 is %f - i %f\n",real,img);
        }
    }
    
    return 0;
}