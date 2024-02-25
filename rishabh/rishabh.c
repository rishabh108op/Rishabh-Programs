#include<stdio.h>
int main()
{
    int n,t,pos;
    printf("\nEnter the number of elements:\n");
    scanf("%d",&n);
    int a[n],i,j;
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(t=0;t<n;t++)
    {
        printf("%d\t",a[t]);
    }
    int key,high=n-1,low=0,mid;
    printf("Enter the key:\n");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            pos=mid;
            printf("Key found at %d  ",pos);
            return 0;
        }
        if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        printf("Search uncessful");
        return 1;

    }

    return 0;
}