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
void insert();
void preorder(node root);
void inorder(node root);
void postorder(node root);
int main()
{
    int ele;
    int op,op1;
    int data_item;
    for(;;)
    {
        printf("\nEnter choice\n");
        printf("\n1.Insert\n2.Traverse\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            printf("Enter total no of data items");
            scanf("%d",&data_item);
            printf("Enter data items\n");
            for(int i=0;i<data_item;i++)
            {
                scanf("%d",&ele);
                insert(ele);
            }
            break;
            case 2:printf("1.Postorder\n2.Inorder\n3.Preorder\n");
            scanf("%d",&op1);
            switch(op1)
            {
            case 1:
            postorder(root);
            break;
            case 2:
            inorder(root);
            break;
            case 3:
            preorder(root);
            break;
            }
            break;
            default:
            return 0;
        }
    }
}
void insert(int ele)
{
    node new;
    new=(node)malloc(sizeof(struct dll));
    new->data=ele;

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
        return;
    }
    printf("%d\t",root->data);
    preorder(root->llink);
    preorder(root->rlink);
}
void postorder(node root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->llink);
    postorder(root->rlink);
    printf("%d\t",root->data);
}