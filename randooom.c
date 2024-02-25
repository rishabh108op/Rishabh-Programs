#include<stdio.h>
int main()
{
    int i,j,n,t,a[100];
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
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
    printf("the greatest number is%d",a[n-1]);


    int key,high=n-1,mid,low=0;
    printf("enter key");
    scanf("%d",key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("key found at %d",mid+1);
            
        
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("element not found");
    return 0;
}