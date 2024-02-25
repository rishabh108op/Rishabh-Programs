#include<stdio.h>
int size;
int hash[20];
void hashing(int value);
void probe(int value ,int a);
int main()
{
    printf("Enter size of hash table\n");
    scanf("%d",&size);
    int data_no;
    printf("Enter no of data items\n");
    scanf("%d",&data_no);
    int a[data_no];
    printf("Enter the data\n");
    for(int i=0;i<data_no;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<data_no;i++)
    {
        hashing(a[i]);
    }
    printf("The hash table is\n");
    for(int i=0;i<size;i++)
    {
        printf("INDEX %d->[  %d  ]\n",i,hash[i]);
    }
    return 0;
}
void hashing(int value)
{
    int k;
    k=value%size;
    if(hash[k]=='\0')
    {
        hash[k]=value;
        return;
    }
  probe(value,k+1);
}
void probe(int value,int l)
{     
    int c;
    c=l%size;
    if(hash[c]=='\0')
    {
        hash[c]=value;
        return;
    }
    probe(value,l+1);
}