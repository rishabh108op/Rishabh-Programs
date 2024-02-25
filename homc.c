#include<stdio.h>
#include<stdlib.h>
struct sll{
    int data;
    struct sll *link;
};
typedef struct sll *node;
node start=NULL;
int main()
{

}
void insertFront()
{
    node new;
    new=(node)malloc(sizeof (struct sll));
    printf("Enter data\n");
    scanf("%d",&new->data);
}
