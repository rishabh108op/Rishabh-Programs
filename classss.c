#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf("Enter the number of memory blocks\n");
    scanf("%d",&n); 
    p=calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Values are\n");
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t",*(p+i));
    }
return 0;
}