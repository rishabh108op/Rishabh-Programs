#include<stdio.h>
int f=-1;
int r=-1;
#define size 5
int main()
{
    int op,q[50];
    for(;;)
    {
    printf("\nEnter choice\n");
    printf("\n1.Insert\n2.Display\n3.delete\n4.Exit\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        insert(q);
        break;
        case 3:
        delete(q);
        break;
        case 2:
        display(q);
        break;
        case 4:
        printf("You choose exit\n");
        return;
        default: return;
    }
    }

}
void insert(int q[size])
{
    int ele;
    if(r==size-1)
    {
        printf("Queue is full can't insert\n");
        return;
    }
    if(f==-1&&r==-1)
    {
        f=0;
        r=0;
}
    printf("Enter element\n");
    scanf("%d",&ele);
    r++;
    q[r]=ele;

}
void delete(int q[size])
{
    int ele;
    if(f==-1||f>r)
    {
        printf("Queue is empty cant delete\n");
        return;
    }
    printf("item deleted = %d",q[f]);
    f++;
    if(f>r)
    {
        f=-1;
        r=-1;
    }
}
void display(int q[size])
{
    if(f==-1||f>r)
    {
        printf("Queue is empty nothing to display\n");
        return;
    }
    printf("\nQueue elements are\n");
    for(int i=f;i<=r;i++)
    {
        printf("%d\t",q[i]);
    }
}