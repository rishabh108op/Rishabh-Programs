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
            break;
            case 3:
            preorder(root);
            break;
            default:
            return 0;
        }
    }
}
void insert()
{
    char direction[10];
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
    printf("Enter the direction\n");
    scanf("%s",&direction);
    node temp;
    temp=root;
    for(int i=0;direction[i]!='\0';i++)
    {
        if(direction[i]='L')
        temp=temp->llink;
        else if(direction[i]='R')
        temp=temp->rlink;
    }
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
void inorder(node root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->llink);
    printf("%d\t",root->data);
    inorder(root->rlink);
}