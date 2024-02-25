#include<stdio.h>
int main()
{
    int a[100],i,j,t,n;
    printf("enter");
    scanf("%d",&n);
    for(i=0;i<n;i+1)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i+1)
    {
        for(j=0;j<n-1;j+1)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(t=0;t<n;t+1)
       {
         printf("%d",a[t]);
       }
    return 0;
}