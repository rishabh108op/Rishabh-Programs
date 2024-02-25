#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("no of ele");
    scanf("%d",&n);
    printf("Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ele;
    printf("Enter element to saerch");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("Found\n");
            return 1;
        }
    }
    printf("Element not found\n");
    return 0;
}