#include<stdio.h>
int n;
void insert(int a[])
{
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ele,pos;
    printf("Enter the position\n");
    scanf("%d",&pos);
    printf("Enter the element at position %d\n",pos);
    scanf("%d",&ele);
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n++;
}
void delete(int a[])
{
    int pos;
    printf("Enter the position\n");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;

}
void display(int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
int main()
{
    int a[50],op;
    for(;;)
    {
    printf("\nEnter array operation choices\n");
    printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
    scanf("%d",&op);
        switch(op)
        {
            case 1:
            insert(a);
            break;
            case 2:
            delete(a);
            break;
            case 3:
            display(a);
            break;
            case 4:
            printf("You choose Exit\n");
            return 0;
            default:
            printf("Invalid option");
            return -1;
        }
    }
    return 0;
}