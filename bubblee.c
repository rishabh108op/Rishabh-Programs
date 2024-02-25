#include <stdio.h>
int main()
{
     int a[10];
    int i,n,j,t,b;
   
    printf("Enter the no of elements to the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1; j++)
        {
             if (a[j]>a[j+1])

            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        
    }
    
    for(t=0;t<n;t+1)
    {
        printf("%d\t",a[t]);
    }
    return 0;
}