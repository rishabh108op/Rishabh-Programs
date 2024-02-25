#include<stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *link;
};
typedef struct sll *node;
node start=NULL;
void insertfront();
void insertend();
void display();
void insertpos();
void deletefront();
void deleteend();
void deletepos();
void search ();
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
            insertfront();
            break;
            case 2:
            insertend();
            break;
            case 3:
            insertpos();
            break;
            case 4:
            display();
            break;
            case 5:
            deletefront();
            break;
            case 6:
            deleteend();
            break;
            case 7:
            deletepos();
            break;
            case 8:
            search();
            break;
            default:
            printf("Invalid choice\n"); 
            return 0;
        }
    }
}
void insertfront()
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
void insertend()
{
    node new,temp;
    new=(node)malloc(sizeof(struct sll));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->link=NULL;
    if(start==NULL)
    {
        start=new;
        return;
    }
    temp=start;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=new;
}
void insertpos()
{
    int pos,count=1;
    node new,cur,temp;
    new=(node)malloc(sizeof(struct sll));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->link=NULL;
    printf("Enter position where you want to insert\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        new->link=start;
        start=new;
        return;
    }
    temp=start;
    cur=NULL;
    while(temp!=NULL)
    {
        if(count==pos)
        break;
        cur=temp;
        temp=temp->link;
        count++;
    }
    if(count==pos)
    {
        cur->link=new;
        new->link=temp;
    }
    else
    {
        printf("Enter valid Position\n");
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
void deletefront()
{
    node temp;
    if(start==NULL)
    {
        printf("Cant delete list empty\n");
        return;
    }
    if(start->link==NULL)
    {
        printf("Deleted item = %d",start->data);
        free(start);
        return;
    }
    temp=start;
    start=start->link;
    printf("Deleted item = %d",temp->data);
    free(temp);
}
void deleteend()
{
    if(start==NULL)
    {
        printf("Cant delete list empty\n");
        return;
    }
    if(start->link==NULL)
    {
        printf("Deleted item = %d",start->data);
        free(start);
        return;
    }
    node temp,curr;
    temp=start;
    curr=NULL;
    while(temp!=NULL)
    {
        curr=temp;
        temp=temp->link;
    }
    printf("Deleted item is %d",temp->data);
    free(temp);
    curr->link=NULL;
}
void deletepos()
{
    int pos,count=1;
    node curr,temp;
    if(start==NULL)
    {
        printf("Cant delete list empty\n");
        return;
    }
    printf("Enter the position where you want to delete\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        printf("Only one item and Deleted item = %d",start->data);
        free(start);
        return;
    }
    temp=start;
    curr=NULL;
    while(temp!=NULL)
    {
        if(count==pos)
        break;
        curr=temp;
        temp=temp->link;
        count++;
    }
    if(count==pos)
    {
        curr->link=temp->link;
        printf("Item deleted is %d",temp->data);
        free(temp);
    }
    else
    {
        printf("Enter valid Position\n");
    }
}
void search()
{
    int key,flag=0;
    node temp;
    if(start==NULL)
    {
        printf("List empty\n");
        return;
    }
    printf("Enter key");
    scanf("%d",&key);
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            flag=1;
            break;
        }
        else
        temp=temp->link;
    }
    if(flag==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}