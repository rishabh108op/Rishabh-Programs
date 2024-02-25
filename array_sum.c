#include<stdio.h>
int main()
{
    int i,n,a[5],sum=0;
    int *p;
    
    printf("enter no of elements");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        printf("enter elements");
        scanf("%d",p);
        p++;
    }
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*p;
        p++;
    }
    printf("%d",sum);
}