#include<stdio.h>
#define size 10
int hash[size];
int main()
{
    int a[5];
    printf("Enter elements\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        hashing(a[i]);
    }
    printf("$&^&^*&^8\n");
        for(int i=0;i<size;i++)
    {
        printf("%d\n",hash[i]);
    }

}
void hashing(int v)
{
    int k;
    k=v%size;
    if(hash[k]='\0')
    {
        hash[k]=v;
    }
    else
    {
        for(int i=k+1;i<size;k++)
        {
                hash[k]=v;
                return;
        }
    }

}