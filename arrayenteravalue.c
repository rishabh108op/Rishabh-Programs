#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a valur");
        scanf("%d",&a[i]);
    }
    printf("%d",a[3]);
    return 0;
}