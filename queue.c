// insertion from front
#include<stdio.h>
#include<stdlib.h>
struct SLL
{
    int data;
    struct SLL link;
};
void insert()
{
    typedef struct SLL*node;
    node start=NULL;
    node new;
    new=(node)malloc(sizeof(struct SLL));
    printf("Enter data");
    scanf("%d",&new->data);
    new->link=NULL;
    if (start==NULL)
    {
        start=new;
    }
    else
    {
        new->link=start;
        start=new;
    }
}
