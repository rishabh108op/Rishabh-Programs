#include<stdio.h>
int n;
int main()
{
    int r,a[50];
    for(;;)
    {
        printf("Enter Your Choice\n\n");
        printf("1.Create\n2.Display\n3.Exit\n");
        scanf("%d",&r);
        switch(r)
        {
            case 1:
            create(a);
            break;
            case 2:
            display(a);
            break;
            case 3:
            printf("\nYou choose to Exit\n");
            return 1;
        }
    }
    return 0;
}
void create(int a[])
{
    int i;
    printf("Enter no of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[])
{
    int i;
    printf("Array elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}