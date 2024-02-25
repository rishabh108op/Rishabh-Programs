// Normal queue program
#include<stdio.h>
int f=-1;
int r=-1;
#define size 5
int main()
{
    int que[50],op;
    for(;;){
    printf("\nEnter choice\n");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&op);
    switch(op)
    {
            case 1:
            insert(que);
            break;
            case 2:
            delete(que);
            break;
            case 4:
            printf("\nYou choose to Exit\n");
            return 1;
            case 3:
            display(que);
            break;
            default:
            return;
    }
    }
}
void insert(int que[size])
{
    int ele;
    printf("Enter the element\n");
    scanf("%d",&ele);
    if(r==size-1)
    {
        printf("\nOverflow\n");
        return;
    }
    if(f==-1&&r==-1)
    {
        f=0;
        r=0;
    }
    else
    {
        r++;
    }
    que[r]=ele;
}
void delete(int que[size])
{
    if(f==-1||f>r)
    {
        printf("\nunderflow cant delete\n");
        return;
    }
    printf("\nItem deleted=%d",que[f]);
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
        printf("\nUnderflow cant display\n");
        return;
    }
    printf("\nContents of queue are\n");
    for(int i=f;i<=r;i++)
    {
        printf("%d\t",q[i]);
    }
}