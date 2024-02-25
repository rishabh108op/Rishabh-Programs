#include<stdio.h>
int n=0;
int x[50];
int s[50];
int d=0;
void subset(int S,int k,int r);
int main()
{
    printf("Enter thr size of array: ");
    scanf("%d",&n);
    int sum=0;
    printf("Enter set values: ");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("Enter max subset sum value: ");
    scanf("%d",&d);
    for(int i=1;i<=n;i++)
    {
        sum=sum+s[i];
    }
    subset(0,1,sum);
    return 0;
}
void subset(int S,int k,int r)
{
    x[k]=1;
    if(S+s[k]==d)
    {
        printf("{");
        for(int j=1;j<=k;j++)
        {
            if(x[j]==1)
            {
                printf(" %d ",s[j]);
            }
        }
        printf("}");
        printf("\n");
    }
    else
    {
        if(S+s[k]+s[k+1]<=d)
        {
            subset(S+s[k],k+1,r-s[k]);
        }
    }
    if(S+s[k+1]<=d &&S+r-s[k]>=d)
    {
        x[k]=0;
        subset(S,k+1,r-s[k]);
    }
}