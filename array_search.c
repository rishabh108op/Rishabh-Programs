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
    int key;
    printf("Enter the key\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Key found search successful\n");
            printf("%d",key);
            return 1;
        }
    }
    printf("key not found\n");
    return 0;
}