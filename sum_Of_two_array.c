#include<stdio.h>
int size;
void main()
{
    printf("Enter array size");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[size]);
    }
    printf("%d",array(a,size));
}
int array(int b[],int c)
{
    if(c==0)
    return 0;
    else
    return (b[c-1]+array(b,c-1));
}