#include<stdio.h>
int fibonacci(int x);
int main()
{
    int a,i;
    printf("enter the number of term\n");
    scanf("%d",&a);
    printf("fibonacci series\n\n");
    for(i=0;i<a;i++)
    {
        printf("%d\n",fibonacci(i));
    }
    return 0;
}
int fibonacci(int x)
{
    if(x==0)
    return 0;
    if(x==1)
    return 1;
    else
    return(fibonacci(x-1)+fibonacci(x-2));

}