#include<stdio.h>
int main()
{
    int h;
    printf("Enter hight of tower\n");
    scanf("%d",&h);
    int temp=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h-i;j++)
        {
            printf("         ");
        }
        for(int k=0;k<temp+1;k++)
        {
            printf("-) AMULYA IS LOBB (-_");
        }
        printf("\n");
        temp++;
    }
    return 0;
}