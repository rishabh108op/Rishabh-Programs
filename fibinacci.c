#include<stdio.h>
int fibonacci(int n);
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
    {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return (fibonacci(n-2)+fibonacci(n-1));
    }