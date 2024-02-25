#include<stdio.h>
int a[100],b[100];
int main()
{
    int k,n;
    printf("Enter no of array elements\n");
    scanf("%d",&n);
    printf("Enter elemments\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the largest element you entered\n");
    scanf("%d",&k);
    int count[k];
    for(int i=0;i<n;i++)
    {
        count[i]=count[a[i]];
    }
    for(int i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    // for(int i=n-1;i>=0;i--)
    // {
    //     b[--count[a[i]]]=a[i];
    // }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",count[i]);
    }
    return 0;
}