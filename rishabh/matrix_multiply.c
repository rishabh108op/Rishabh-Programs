#include<stdio.h>
int main()
{
    int i,j,m,n,p,q,k;
    printf("enter the no of row and column first matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the no of row and column second matrix\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("number of column of first matrix not equal to no of row of second matrix\n");
        printf("\nMatric multiplication not possible\n");
    }
    int a[m][n];
    int b[p][q];
    printf("enter the elements for first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements for second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix one is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix two is\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int c[m][q];
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }

        }
    }
    printf("\nmatrix multiplication\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}