#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) ((x*x*x)-18)
int main(){
float a=0,b=0,approx=0,var,c;
int i=0;
printf("Enter the Intervals: ");
scanf("%f %f",&a,&b);
if((f(a)*f(b))>0){
        printf("Invalid Interval Exit!");
        exit(1);
}
else if(f(a)==0 || f(b)==0){
        printf("Root is one of interval bounds. Root is %f\n",f(a)==0?a:b);
        exit(0);
}
printf("Iteration\ta value\t\tb value\t\tc value\t\tf(c) value\tapprox\n");
do{
        var=c;
        c=(((a*f(b))-(b*f(a)))/(f(b)-f(a)));

        printf("%2d\t\t%4.6f\t%4.6f\t%4.6f\t%4.6f\t",i++,a,b,c,f(c));
        
        if(f(c)==0)
        {
                break;
        }
        else if(f(a)*f(c)<0)
        {
                b=c;
        }
        else a=c;

        approx=fabs(c-var);

        if(i==1)
        {
                printf("----\n");
        }
        else 
        
        printf("%4.6f\n",approx);

}while(approx>0.0000);
printf("\n\nRoot for the given is %4.6f \n",c);
return 0;
}