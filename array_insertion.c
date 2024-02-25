#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos, ele;
    printf("Enter the position and element\n");
    scanf("%d%d",&pos,&ele);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i]; 
    }
    a[pos-1]=ele;
    n=n+1;
    printf("Elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}