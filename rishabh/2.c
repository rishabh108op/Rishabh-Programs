#include<stdio.h>
#include<stdlib.h>
int size;
int f=-1;
int r=-1;
void display(int a[size]);
void insert(int a[size]);
void delete(int a[size]);
int main()
{
    printf("\nEnter queue size\n");
    scanf("%d",&size);
    int a[size];
    int op;
    for(;;)
    {
    printf("\nEnter choice\n");
    printf("\n1.push\n2.pop\n3.Display\n");
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
            default: return 0;
    }
    }
}
void insert(int a[size])
{
    if(r==size-1)
    {
        printf("\nqueue Overflow\n");
        return;
    }
    int ele;
    printf("Enter element\n");
    scanf("%d",&ele);
    if(f==-1&&r==-1)
    f=r=0;
    else
    r++;
    a[r]=ele;
}
void delete(int a[size])
{
    if(f==-1||f>r)
    {
        printf("Queue underflow\n");
        return;
    }
    printf("Item deleted = %d",a[f]);
    f++;
    if(f>r)
    {
        f=-1;
        r=-1;
    }
}
void display(int a[size])
{
    if(f==-1||f>r)
    {
        printf("Queue empty\n");
    }
    else{
    for(int i=f;i<=r;i++)
    {
        printf("%d\t",a[i]);
    }
    }
}