#include<stdio.h>
struct DLL
{
    int data;
    struct DLL *llink;
    struct DLL *rlink;
};
typedef struct DLL *node;
node start=NULL;
int main()
{
    int op;
    for(;;)
    {
        printf("\nEnter the choice\n");
        printf("1.Insert\n2.Display\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            insertFront();
            break;
            case 2:
            display();
            break;
        }
    }
    return 0;
}
void insertFront()
{
    node new;
    new=(node)malloc(sizeof(struct DLL));
    printf("Enter data to node\n");
    scanf("%d",&new->data);
    new->rlink=NULL;
    new->llink=NULL;
    if(start==NULL)
    {
        start=new;
        return;
    }
    new->llink=start;
    start->rlink=new;
    start=new;
}
void display()
{
    if(start==NULL)
    {
        printf("No data in the list\n");
        return;
    }
    if((start->rlink&&start->llink)==NULL)
    {
        printf("Only one data\n");
        printf("%d",start->data);
        return;
    }
    node temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->llink;
    }
}