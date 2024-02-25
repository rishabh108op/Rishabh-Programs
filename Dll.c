#include<stdio.h>
#include<stdlib.h>
struct dll
{
    char id[20];
    char name[20];
    char branch[20];
    char spec[20];
    struct dll *llink;
    struct dll *rlink;
};
typedef struct dll *node;
node top =NULL;
node front =NULL;
node rear =NULL;
void push()
{
    node new;
    new=(node)malloc(sizeof(struct dll));
    printf("Enter ID\n");
    scanf("%s",&new->id);
    printf("Enter Name\n");
    scanf("%s",&new->name);
    printf("Enter Branch\n");
    scanf("%s",&new->branch);
    printf("Enter Specialization\n");
    scanf("%s",&new->spec);
    new->llink=NULL;
    new->rlink=NULL;
    if(top==NULL)
    {
        top=new;
        return;
    }
    top->rlink=new;
    new->llink=top;
    top=new;
}
void pop()
{
    node temp;
    if(top==NULL)
    {
        printf("Cant Delete Stack Empty\n");
        return;
    }

    temp=top;
    top=top->llink;
    printf("\nDeleted Details");
    printf("\nID= %s",temp->id);
    printf("\nNAME= %s",temp->name);
    printf("\nBRANCH= %s",temp->branch);
    printf("\nSPECIALIZATION= %s",temp->spec);
    printf("\n****************************\n");
    free(temp);
    top->rlink=NULL;
}
void display()
{
    if(top==NULL)
    {
        printf("Nothing to display\n");
        return;
    }
    node temp;
    temp=top;
    printf("Professor's details......\n");
    while(temp!=NULL)
    {
        printf("\nID= %s",temp->id);
        printf("\nNAME= %s",temp->name);
        printf("\nBRANCH= %s",temp->branch);
        printf("\nSPECIALIZATION= %s",temp->spec);
        printf("\n************************************\n");
        temp=temp->llink;
    }
}
// Queue
void insert()
{
    node new;
    new=(node)malloc(sizeof(struct dll));
    printf("Enter ID\n");
    scanf("%s",&new->id);
    printf("Enter Name\n");
    scanf("%s",&new->name);
    printf("Enter Branch\n");
    scanf("%s",&new->branch);
    printf("Enter Specialization\n");
    scanf("%s",&new->spec);
    new->llink=NULL;
    new->rlink=NULL;
    if(front==NULL)
    {
        front=new;
        rear=new;
        return;
    }
    rear->rlink=new;
    new->llink=rear;
    rear=new;
}
void delete()
{
    node temp;
    if(front==NULL)
    {
        printf("Cant Delete Queue Empty\n");
        return;
    }
    if(front->llink&&front->rlink==NULL)
    {
        printf("Deleted Details");
        printf("\nID= %s",front->id);
        printf("\nNAME= %s",front->name);
        printf("\nBRANCH= %s",front->branch);
        printf("\nSPECIALIZATION= %s",front->spec);
        free(front);
        return;
    }
    temp=front;
    front=front->rlink;
    printf("\nDeleted Details");
    printf("\nID= %s",temp->id);
    printf("\nNAME= %s",temp->name);
    printf("\nBRANCH= %s",temp->branch);
    printf("\nSPECIALIZATION= %s",temp->spec);
    printf("\n****************************\n");
    free(temp);
    front->llink=NULL;
}
void displayque()
{
    if(front==NULL)
    {
        printf("Nothing to display\n");
        return;
    }
    node temp;
    temp=front;
    printf("Professor's details......\n");
    while(temp!=NULL)
    {
        printf("\nID= %s",temp->id);
        printf("\nNAME= %s",temp->name);
        printf("\nBRANCH= %s",temp->branch);
        printf("\nSPECIALIZATION= %s",temp->spec);
        printf("\n************************************\n");
        temp=temp->rlink;
    }
}
void count()
{
    int count =0;
    if(rear==NULL)
    {
        printf("NO node present\n");
        return;
    }
    node temp;
    temp=rear;
    while(temp!=NULL)
    {
        count++;
        temp=temp->llink;
    }
    printf("Number of nodes are %d\\n",count);
}
int main()
{
    int op1,op2;
    for(;;)
    {
        printf("\nChoose following operations\n");
        printf("1.Create DLL Stack Of N Professors\n");
        printf("2.Create DLL Queue Of N Professors\n");
        printf("3.Exit\n");
        scanf("%d",&op1);
        switch(op1)
        {
            case 1:
            printf("Enter choices to do the operations using stack\n");
            printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
            scanf("%d",&op2);
            switch(op2)
            {
                case 1:
                push();
                break;
                case 2:
                pop();
                break;
                case 3:
                display();
                break;
                case 4:
                printf("You choose Exit\n");
                return 0;
                default: return 0;
            }
            break;
            case 2:
            printf("Enter choices to do the operations using Queue\n");
            printf("1.Insert\n2.Delete\n3.Display\n4.Count number of Nodes\n5.Exit\n");
            scanf("%d",&op2);
            switch(op2)
            {
                case 1:
                insert();
                break;
                case 2:
                delete();
                break;
                case 3:
                displayque();
                break;
                case 4:
                count();
                break;
                case 5:
                printf("You choose Exit\n");
                return 0;
                default: return 0;               
            }
            break;
            case 3:
            printf("You choose Exit\n");
            return 0;
            default: return 0;
        }
    }
}