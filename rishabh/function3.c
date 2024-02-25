#include<stdio.h>
int rishabh();
void main()
{
    int sum;
    sum=rishabh();
    printf("%d",sum);

}
int rishabh()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    return a+b;
}
