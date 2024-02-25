#include<stdio.h>
#define MAX 20
int adj[MAX][MAX],n,queue[100],f=-1,r=-1,stack[100],top=-1;//queue and stack variables
int visit[MAX];
void create();
void BFS(int);
void DFS(int);

void create()//create adjacency list
{
    int i,j,x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            adj[i][j]=0;
            else
            {
                printf("\n%d to %d",i,j);
                printf("\nPress 1: Connected\nPress 0:Not connected\n");
                scanf("%d",&adj[i][j]);
            }
        }
    } 
}
void BFS(int v)
{
    int i,j;
    if(visit[v]==0)
        {
            printf("%d\t",v);
            visit[v]=1;
        }
    for(j=0;j<n;j++)
        {
        if((adj[v][j]==1)&&!visit[j])
            {
                queue[++r]=j; 
            }
        }
    if(f<=r)
    {
        visit[f];
        BFS(queue[f++]); 
    }
}
void DFS(int v)
{
    int j;
    if(visit[v]==0)
        {
            printf("%d\t",v);
            visit[v]=1;
            stack[++top];
        }
    for(j=0;j<n;j++)
        {
            if(adj[v][j]==1)
            {
                DFS(j);
                f=0;
            }
        }
    if(f==-1&&top>-1)
    {
        DFS(stack[top--]);
    }
}
void main()
{
    int i,ch;
    printf("enter number of nodes");
    scanf("%d",&n);
    do
    {
        printf("\n1.create\n2.Print:BFS\n3.connected or not\n4.exit:");
        scanf("%d",&ch);
    switch(ch)
        {
            case 1: create();
            break;
 
            case 2: for(i=0;i<n;i++)
                    {
                        visit[i]=0;
                    }
            printf("\nBFS:");
            BFS(0);
            break;
 
            case 3: for(i=0;i<n;i++)
                    {
                        visit[i]=0; //initialised visited to 0
                    }   
            printf("\nDFS:");
            DFS(0);
            for(i=0;i<n;i++)
            {
                if(visit[i]==1)
                {//Printing the DFS result 
                    printf("\t%d",visit[i]); 
                }
                else
                {
                    printf("Graph is not connected");
                }
            }
            break;
            case 4 : break;
            default: break;
        }
    }
    while(ch!=4);
}
