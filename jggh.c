#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,ele;
    printf("Enter the pos and element\n");
    scanf("%d%d",&pos,&ele);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n++;
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}