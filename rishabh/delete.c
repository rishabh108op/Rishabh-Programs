#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of array elements");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int temp;
    for(int j=0;j<n-1;j++)
    {
        a[temp]=a[j];
        a[j]=a[n-(j+1)];
        a[n-(j+1)]=a[temp];
    }
    for(int temp=0;temp<n;temp++)
    {
        printf("%d\t",a[temp]);
    }
    return 0;
}