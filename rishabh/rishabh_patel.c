#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,ele;
    printf("Enter the position where you want to add\n");
    scanf("%d",&pos);
    printf("Enter the element\n");
    scanf("%d",&ele);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    printf("your array\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}