#include<stdio.h>
#include<stdlib.h>
struct dll
{
    int data;
    struct dll *llink;
    struct dll *rlink;
};
typedef struct dll*node;
node root = NULL;
void insert()
{
    node new;
    new=(node)malloc(sizeof(struct dll));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->llink=NULL;
    new->rlink=NULL;
    if(root==NULL)
    {
        root=new;
        return;
    }
    node temp,curr=NULL;
    temp=root;
    while(temp!=NULL)
    {
        curr=temp;
        if(new->data<temp->data)
        temp=temp->llink;
        else
        temp=temp->rlink;
    }
    if(new->data<curr->data)
    curr->llink=new;
    else
    curr->rlink=new;
}
void preorder(node root)
{
    if(root==NULL)
    {
        return 0;
    }
    printf("%d\t",root->data);
    preorder(root->llink);
    preorder(root->rlink);
}
void postorder(node root)
{
    if(root==NULL)
    {
        return 0;
    }
    postorder(root->llink);
    postorder(root->rlink);
    printf("%d\t",root->data);
}
void inorder(node root)
{
    if(root==NULL)
    {
        return 0;
    }
    inorder(root->llink);
    printf("%d\t",root->data);
    inorder(root->rlink);
}
int main()
{
    int op;
    for(;;)
    {
        printf("\nEnter choice\n");
        printf("\n1.Insert\n2.postorder\n3.preorder\n4.inorder\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            insert();
            break;
            case 2:
            postorder(root);
            break;
            case 4:
            inorder(root);
            return 0;
            case 3:
            preorder(root);
            break;
            default:
            return;
        }
    }
}
void insertlevel()
{
    node new;
    new=(node)malloc(sizeof(struct dll));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->llink=NULL;
    new->rlink=NULL;
    if(root==NULL)
    {
        root=new;
        return;
    }
    node temp,curr=NULL;
    temp=root;
    while(temp!=NULL)
    {
        curr=temp;
        if(new->data<temp->data)
        temp=temp->llink;
        else
        temp=temp->rlink;
    }
    if(new->data<curr->data)
    curr->llink=new;
    else
    curr->rlink=new;
}
