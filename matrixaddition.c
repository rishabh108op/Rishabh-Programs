#include<stdio.h>
int main()
{
    int m,n,j,i;
    printf("enter the order of matrix");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("entered matrix is\n");
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix is");
            for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

}