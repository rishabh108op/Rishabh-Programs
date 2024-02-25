#include<stdio.h>
int main()
{
    int i,n,j,t,b;
    int a[10];
    printf("Enter the no of elements to the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(b=0;b<n-1;b+1)
    {
    for(j=0;j<n-1;j+1)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    }

    for(t=0;t<n;t+1)
    {
        printf("%d\t",a[t]);
    }
    return 0;
}