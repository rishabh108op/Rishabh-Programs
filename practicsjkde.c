#include<stdio.h>
int n;
void create(int a[])
{
    int i;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[])
{
    int i;
    printf("the elements you entered\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    int ch,a[n];
    printf("Enter your choice:\n\n");
    for(;;)
    {

        printf("1.DISPLAY\n2.CREATE\n3.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 2:
            create(a);
            break;
            case 1:
            display(a);
            break;
            case 3:
            printf("You chose Exit\n");
            return 0;
        }
    
    }

    return 0;
}