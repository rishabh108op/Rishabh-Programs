#include<stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *link;
};
typedef struct sll *node;
node start=NULL;
void insert();
int main()
{
    int op;
    for(;;)
    {
        printf("********************************************************************");
        printf("\nEnter choice");
        printf("\n1.INSERT_FRONT\n2.INSERT_END\n3.INDERT_AT_ANY_POSITION");
        printf("\n4.DISPLAY\n5.DELETE_FRONT\n6.DELETE_END\n7.DELETE_AT_ANY_POSITION\n8.SEARCH\n");
        printf("********************************************************************\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            insert();
            break;
            case 2:
            sort();
            break;
            case 3:
            display();
            break;
            default:
            printf("Invalid choice\n"); 
            return 0;
        }
    }
}
void insert()
{
    node new;
    new=(node)malloc(sizeof(struct sll));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->link=NULL;
    if(start==NULL)
    {
        start=new;
        return;
    }
    new->link=start;
    start=new;
}
void sort()
{
    int t;
    node temp,curr;
    temp=start;
    while(temp!=NULL)
    {
        curr=temp;
        for(int i=0;i<2;i++)
        {
            temp=temp->link;
               if(curr->data < temp->data)
                {
                    t=temp->data;
                    temp->data=curr->data;
                    curr->data=t;
                }
        }
        temp=temp->link;
    }
}
void display()
{
    if(start==NULL)
    {
        printf("NO element to display\n");
        return;
    }
    else if(start->link==NULL)
    {
        printf("Only one data that is %d",start->data);
        return;
    }
    node temp;
    temp=start;
    printf("List data elements\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}