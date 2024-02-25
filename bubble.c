#include<stdio.h>
int main()
{ 
      int a[10],j,t,n,i;
      printf("Enter the number of elements in the array");
      scanf("%d",&n);
      printf("Enter the elements of the array");

    for  (i=0;i<n;i=i+1)

    {
         scanf("%d",&a[i]);

    }

    for (i=0;i<n-1;i=i+1)

    {
        for (j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1])

            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
        printf("%d\t",a[n-1]);
    
     return 0;
}