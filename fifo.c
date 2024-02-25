// Normal queue program
#include<stdio.h>
int f=-1;
int r=-1;
int size;
void insert(int que[size],int ele);
void insert(int que[size],int ele);
int main()
{
    int n;
    int p=0;
    printf("Enter total number of frames: ");
    scanf("%d",&n);
    printf("Enter the frames: ");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Memory frame size: ");
    scanf("%d",&size);
    int que[size];
    for(int i=0;i<size;i++)
    {
        que[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if((f==0&&r==size-1)||f==r+1)
        for(int j=0;i<size;j++)
        {
            if(que[j]!=arr[i])
            {
                if((f==0&&r==size-1)||f==r+1)
                {
                    delete(que[size]);
                }
                insert(que[size],arr[i]);
                p++;
            }
        }
    }
    printf("%d",p);
}
