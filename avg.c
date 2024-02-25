#include<stdio.h>
int main()
{
    printf("Enter array size");
    int n;
    scanf("%d",&n);
    int a[n];
    int k=0;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1]&&i<n)
        {
            continue;
        }
        a[k++]=a[i];
    }
    for(int i=0;i<k;i++)
    {
        printf("%d\t",a[i]);
    }
}