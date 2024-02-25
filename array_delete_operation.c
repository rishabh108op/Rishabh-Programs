#include<stdio.h>
int main()
{
    int i,n,a[10],pos,ele;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position and element\n");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("Elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}