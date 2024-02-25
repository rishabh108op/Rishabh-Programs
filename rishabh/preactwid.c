#include<stdio.h>
int n;
int main()
{
    for(;;)
    {
        printf("Enter array operation");
        printf("\n1.create\n2.display\n3.Exit\n");
        int op,a[n];
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            create(a);
            break;
            case 2:
            display(a);
            break;
            default:
            return;

        }
    }
}
void create(int a[])
{
    printf("Enter no Of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[])
{
    printf("The array elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}