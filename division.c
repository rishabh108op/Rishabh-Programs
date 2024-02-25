#include<stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *link;
};
typedef struct sll*node;
node start1=NULL;
node start2=NULL;
node conc(node a,node b);
void insert1();
void insert2();
void display();
int main()
{
    int op;
    for(;;)
    {
    printf("\nEnter choice\n");
    printf("\n1.Insert 1\n2.Insert 2\n3.Display\n");
    scanf("%d",&op);
    switch(op)
    {
            case 1:
            insert(start1);
            break;
            case 2:
            insert(start2);
            break;
            case 3:
            display();
            return 0;
            default: return 0;
    }
    }
}
void insert(node start)
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
node conc(node a,node b)
{
    node temp;
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    else
    temp=a;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=b;
    return a;
}
void display()
{
    if(start1==NULL)
    {
        printf("\nNO element in first list to display\n");
    }
    else if(start1->link==NULL)
    {
        printf("\nOnly one data in First list and it is %d\n",start1->data);
    }
    else
    {
        node temp1;
        temp1=start1;
        printf("First List data elements\n");
        while(temp1!=NULL)
        {
            printf("%d\t",temp1->data);
            temp1=temp1->link;
        }
        printf("\n*************************\n");
    }
    if(start2==NULL)
    {
        printf("\nNO element in Second list to display\n");
    }
    else if(start2->link==NULL)
    {
        printf("\nOnly one data in Second list and it is %d\n",start2->data);
    }
    else
    {
        node temp2;
        temp2=start2;
        printf("Second List data elements\n");
        while(temp2!=NULL)
        {
            printf("%d\t",temp2->data);
            temp2=temp2->link;
        }
        printf("\n*************************\n");
    }
    node start;
    start=conc(start1,start2);
    if(start==NULL)
    {
        printf("Concatinated list is empty\n");
        return;
    }
    printf("\nConcatenated list elements are...................\n\n");
    printf("[");
    while(start!=NULL)
    {
        printf("  %d  ",start->data);
        start=start->link;
    }
    printf("]");
    return;
}