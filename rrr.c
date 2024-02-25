#include <stdio.h>

int main ()
{
    int n,i,j,position,swap;
   
    printf("\nEnter number of elements to the array");
    scanf("%d",&n);
     int a[n];
    printf("\nEnter the elements to the array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(a[position]>a[j])
            position=j;
        }
        if(position!=i)
        {
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }     
    return 0;
}