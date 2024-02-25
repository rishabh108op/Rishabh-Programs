#include<stdio.h>
#include<stdlib.h>
struct sll{
    int data;
    struct sll *link;
};
typedef struct sll *node;
node top=NULL;
node front=NULL;
node rear=NULL;
int main()
{
    int op;
    for(;;)
    {
    printf("Enter choice\n");
    printf("1.Create Stack\n2.Display\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        push();
        break;
        case 2:
        display();
        break;
    }
    }
    return 0;
}
void push()
{
    node new;
    new=(node)malloc(sizeof(struct sll));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->link=NULL;
    if(top==NULL)
    top=new;
    else
    {
        top->link=new;
        top=new;
    }
}
void display()
{
    node temp;
    if(top==NULL)
    printf("Stack Empty\n");
    temp=top;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}