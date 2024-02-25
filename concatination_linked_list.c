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
    int ele1,ele2,n1,n2;
    int op;
    for(;;)
    {
    printf("\nEnter choice\n");
    printf("\n1.Insertion In First List\n2.Insertion In Second List\n3.Display\n");
    scanf("%d",&op);
    switch(op)
    {
            case 1:
            printf("Enter total number of elements in first list\n");
            scanf("%d",&n1);
            printf("Enter Elements For First List\n");
            for(int i=0;i<n1;i++)
            {
                scanf("%d",&ele1);
                insert1(ele1);
            }
            break;
            case 2:
            printf("Enter total number of elements in second list\n");
            scanf("%d",&n2);
            printf("Enter Elements For Second List\n");
            for(int i=0;i<n2;i++)
            {
                scanf("%d",&ele2);
                insert2(ele2);
            }
            break;
            case 3:
            display();
            return 0;
            default: return 0;
    }
    }
}
void insert1(int ele)
{
    node new1,temp;
    new1=(node)malloc(sizeof(struct sll));
    new1->data=ele;
    new1->link=NULL;
    if(start1==NULL)
    {
        start1=new1;
        return;
    }
    temp=start1;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=new1;
}
void insert2(int ele)
{
    node new2,temp;
    new2=(node)malloc(sizeof(struct sll));
    new2->data=ele;
    new2->link=NULL;
    if(start2==NULL)
    {
        start2=new2;
        return;
    }
    temp=start2;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=new2;
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