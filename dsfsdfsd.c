#include<stdio.h>
int main()
{
    int i,j,temp,n,pos;
    printf("no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("\n%d\t",a[i]);
    }
    return 0;
}