
node insert(node new,node start)
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
    return start;
}