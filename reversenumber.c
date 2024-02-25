#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,img,real;
    printf("Enters the cofficient\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b-4*a*c);
    if(a==0)
    {
        printf("a cannot be zero");
    }
    else
    {
        if(d==0)
        {
            r1=-b/2*a;
            r2=-b/2*a;
            printf("roots are similar and equal\n");
            printf("root 1=%f\nroot 2 = %f",r1,r2);

        }
    }

    return 0;
}
