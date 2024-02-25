#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>85 && marks<=100)
    {
        printf("congrats you got A grade...");
    }
    else if(marks>60 && marks<=85)
    {
        printf("congrats you got B grade...");
    }
    else if(marks>40 && marks<=60)
    {
        printf("congrats you got c grade...");
    }
    else
    {
        printf("sorry you are fail");
    }


    return 0;
}