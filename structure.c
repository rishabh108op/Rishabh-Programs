#include <stdio.h>
#include <math.h>
void main()
{
	int size;
	printf("Enter size of array : ");
	scanf("%d", &size);
	int a[size];
	printf("Enter %d elements : ", size);
	for(int i=0; i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	int levels=0;
	for(int i=0;i<size;i++)
	{
		if(pow(2,i) >= size)
		{
			levels = i;
			break;
		}
	}
    int val=0;
    int temp=levels;
    for(int i=0;i<levels;i++)
    {
        for(int j=0;j<=temp;j++)
        {
            printf("  ");
        }
        for(int k=0;k<pow(2,(levels-temp));k++)
        {
            printf(" %d ",a[val]);
            val++;
            if(val==size)
            return;
        }
        printf("\n");
        for(int j=0;j<=temp;j++)
        {
            printf("  ");
        }
        for(int j=0;j<pow(2,(levels-temp));j++)
        {
            printf("/ \\  ");
        }
        printf("\n");
        temp--;
    }
}