#include <stdio.h>
int main()
{
    int i,n,j,b,t;
    int a[10];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<=0;i++)
    {
        scanf("%d",&a[i]);
    }
    for(b=0;b<n-1;b++)
    {
    for(j=0;j<n-1;j++)
     {
        if(a[j]>a[j++]);
        {t=a[j];
        a[j]=a[j++];
        a[j++]=t;}
    }
    }
    for(t=0;t<n;t++)
    {
        printf("%d\t",a[t]);
    }

    return 0;
}