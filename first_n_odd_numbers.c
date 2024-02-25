#include<stdio.h>
int main()
{   int n,i;
    printf("enter no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("the odd numbers are%d\n",(2*i-1));

    }
    return 0;
}