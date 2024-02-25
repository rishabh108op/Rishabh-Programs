#include<stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *llink;
    struct sll *rlink;
};
typedef struct sll *node;
node start=NULL;
int main()
{
for(;;)
{
    printf("Enter choice");
    int op;
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    create();
    break;
    case 2:
    display();
    
    default:
        break;
    }
}
}
void create()
{
    node new;
    printf("Enter data\n");
    new=(node)malloc(sizeof(struct sll));
    new->llink=NULL;
    new->rlink=NULL;
    scanf("%d",&new->data);
    if(start==NULL)
    {
        start=new;
    }
    node temp;
    temp=start;
    while(temp->rlink!=NULL)
    {
        temp=temp->rlink;
    }
    temp->rlink=new;
    new->llink=temp;
}

void display()
{
    node temp;
    temp=start;
    while(temp->rlink!=NULL)
    {
        printf("/t%d",temp->data);
        temp=temp->rlink;
    }
}