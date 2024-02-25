#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},ele;
    printf("Enter ele\n");
    scanf("%d",&ele);
    for(int i=0;i<5;i++)
    {
        if(ele==a[i])
        {
            printf("Found");
        }
        else{
            printf("Not found");
        }
    }
}