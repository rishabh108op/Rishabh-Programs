#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,r1,r2,imag,real;
    printf("Enter the coefficient of the quadratic");
    scanf("%f %f %f",&a,&b,&c);
    s=b*b-4*a*c;
    if(a==0)
    {
        printf("a should not be equal to zero");
        return 0;
    }
    else
    {
        if(s==0)
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
                real=(-b)/2*a;
                imag=(sqrt(-s))/(2*a);
                printf("\nr1=%f+i%f",real,imag );
                 printf("\n r2=%f-i%f",real,imag );
                 }
    }
            
    
    return 0;
}