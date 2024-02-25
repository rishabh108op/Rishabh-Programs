#include<stdio.h>
#include<math.h>
int main()
{
    float sum,mean,var,sd;
    float *p;
    int n,i;
    printf("number of elements to store");
    scanf("%d",&n);
    float a[n];
    printf("enter the elements");
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%f",p);
        p++;
    }
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*p;
        p++;
    }
    mean=sum/n;
    p=a;
    for(i=0;i<n;i++)
    {
        var=var+pow((*p-mean),2);
        p++;
    }
    var=var/n;
    sd=sqrt(var);
    printf("sum= %f\n",sum);
    printf("mean= %f\n",mean);
    printf("sd= %f\n",sd);

    return 0;
}