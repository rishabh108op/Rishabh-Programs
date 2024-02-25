#include<stdio.h>
int main()
{
    int i,j,p,q,k,m,n;
    printf("enter the no of rows and cloumn of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the no of rows and column of matrix two\n");
    scanf("%d%d",&p,&q);
    printf("enter the elements of first matrix\n");
    // if(n!=p)
    // {
    //     printf("matrix multiplication not possible\n");
    // }
    int a[m][n];
    int b[p][q];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix\n");
        for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the first matrix is\n");
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is\n");
        for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // int c[m][q];
    // for(i=0;i<m;i++)
    // {
    //     for(j=0;j<q;j++)
    //     {
    //         c[i][j]=0;
    //         for(k=0;k<n;k++)
    //         {
    //             c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    //         }
    //     }
    // }
    // printf("matrix multiplication is here\n");
    //     for(i=0;i<m;i++)
    // {
    //     for(j=0;j<q;j++)
    //     {
    //         printf("%d\t",c[i][j]);
    //     }
    //     printf("\n");
    // }    


    return 0;
}