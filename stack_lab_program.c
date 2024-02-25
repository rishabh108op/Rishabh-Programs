#include<stdio.h>
int top=-1;
#define size 5
void push(int s[]);
void pop(int s[]);
void display(int s[]);
int main()
{
    int op,s[size];
    for(;;)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            push(s);
            break;
            case 2:
            pop(s);
            break;
            case 3:
            display(s);
            break;
            case 4:
            printf("You choose Exit\n");
            return -1;
            default:
            printf("Wrong Choice\n");
        } 
    }
    return 0;
}
void push(int s[])
{
    int ele;
    printf("Enter Element to push\n");
    scanf("%d",&ele);
    if(top==size-1)
    {
        printf("Stack Overflowing\n");
    }
    else
    {
        top=top+1;
        s[top]=ele;
    }
}
void pop(int s[])
{
    int item_deleted;
    if(top==-1)
    {
        printf("Stack is Underflowing\n");
    }
    else
    {
        item_deleted=s[top];
        printf("Item deleted is %d",item_deleted);
        top=top-1;
    }

}
void display(int s[])
{
    if(top==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
    printf("Stack Elements are\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",s[i]);
    }
    }
}