#include<stdio.h>
#include<math.h>
int n;
void Tower(int n,char source,char temp,char destination);
void main()
{
    printf("Enter number of Disks\n");
    scanf("%d",&n);
    printf("The sequence of moves are\n");
    Tower(n,'A','B','C');
    int t=pow(2,n)-1;
    printf("\nThe number of moves are %d\n",t);
}
void Tower(int n,char source,char temp,char destination)
{
    if(n==1)
    {
        printf("\nMove disk %d from %c -> %c\n",n,source,destination);
        return;
    }
    Tower(n-1,source,destination,temp);
    printf("Move disk %d from %c -> %c",n,source,destination);
    Tower(n-1,temp,source,destination);
}