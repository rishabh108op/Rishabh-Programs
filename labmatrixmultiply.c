#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    printf("enter row and column of first matrix");
    scanf("%d %d",&m,&n);
    printf("enter row and column of second matrix");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q];
    if(n!=p)
    {
        printf("column of matrix one is not equal to row of second\n");
        printf("matrix multiplication not possible\n");
    }
    printf("enter elements for first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements for second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix\n");
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix\n");
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
    printf("matrix multiplication\n\n");
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