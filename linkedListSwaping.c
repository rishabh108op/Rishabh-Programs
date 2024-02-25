#include<stdio.h>
#include<stdlib.h>
struct dll
{
    int data;
    struct dll *llink;
    struct dll *rlink;
};
typedef struct dll *node;
node start =NULL;
int main()
{
    int op;
    for(;;)
    {
        printf("\nEnter choice\n");
        printf("\n1.Insert\n2.swap\n3.display\n4.Exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            create();
            break;
            case 2:
            swap();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            default:
            return 0;
        }
    }
}
void create()
{
    node new;
    new=(node)malloc(sizeof(struct dll));
    printf("Enter DATA\n");
    scanf("%d",&new->data);
    new->llink=NULL;
    new->rlink=NULL;
    if(start==NULL)
    {
        start=new;
        return;
    }
    start->llink=new;
    new->rlink=start;
    start=new;
}
void swap()
{
    node temp;
    if(start==NULL)
    return;
    if(start->llink==NULL&&start->rlink==NULL)
    return;
    temp=start;
    while(temp!=NULL)
    {
        int t;
        t=temp->data;
        temp->data=temp->rlink->data;
        temp->rlink->data=t;
        temp=temp->rlink->rlink;
    }
    temp=start;
    printf("After swapping :\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->rlink;
    }
}
void display()
{
    if(start==NULL)
    {
        printf("Nothing to display\n");
        return;
    }
    node temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->rlink;
    }
}