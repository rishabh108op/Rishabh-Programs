#include<stdio.h>
int main()
{
    int i,j,t,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter thr elements\n");
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
    int key,high,low,mid;
    printf("enter the key");
    scanf("%d",&key);
    high=n-1;
    low =0;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(key==a[mid])
        {
            printf("key found at position %d",mid+1);
            return 0;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        printf("key not found\n");
        return 1;
    }
    return 0;
}