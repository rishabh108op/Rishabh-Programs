#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos;
    printf("Enter the position where you want to delete\t");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("Your array\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}