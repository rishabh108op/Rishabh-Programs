#include<stdio.h>
#define max 10
int adj[max][max];
int visited[max];
int n,u,k;
void DFS(int adj[max][max],int visited[],int node);
void BFS(int adj[max][max],int visited[],int node);
void create();
int main()
{
    int op,node1,node2,node3;
    for(;;)
    {
        printf("\nEnter Choice\n");
        printf("1.Create\n2.BFS\n3.DFS\n4.Connectivity\n5.Exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            create();
            break;
            case 2:
            printf("Enter the node index from where you start\n");
            scanf("%d",&node1);
            BFS(adj,visited,node1);
            break;
            case 3:
            printf("Enter the node index from where you start\n");
            scanf("%d",&node2);
            DFS(adj,visited,node2);
            break;
            case 4:
            printf("Enter the node from where you want to check:\n");
            scanf("%d",&node3);
            printf("Nodes that are rechable from %d\n",node3);
            for(int i=0;i<n;i++)
            {
                if(adj[node3][i]==1)
                {
                    printf("%d->%d\n",node3,i);
                }
                else
                printf("Graph not connected\n");
            }
            break;
            case 5: return 0;
            default: return 0;
        }
    }
}
void create()
{
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                adj[i][j]=0;
            }
            else
            {
                printf("\n%d to %d\n",i,j);
                printf("Press 1:Connected\nPress 0:Not Connected\n");
                scanf("%d",&adj[i][j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",adj[i][j]); 
        }
        printf("\n");
    }
}
void BFS(int adj[max][max],int visited[],int node)
{
    int queue[max],front=-1,rear=-1;
    for(int k=0;k<max;k++)
    {
        visited[k]=0;
    }
    rear++;
    front++;
    queue[rear]=node;
    visited[node]=1;
    while(rear>=front)
    {
        u=queue[front++];
        printf("%d\t",u);
        for(int i=0;i<max;i++)
        {
            if(adj[u][i]==1&&visited[i]==0)
            {
                rear++;
                queue[rear]=i;
                visited[i]=1;
            }
        }
    }
}
void DFS(int adj[max][max],int visited[],int node)
{
    int stack[max],top=-1;
    for(int k=0;k<max;k++)
    {
        visited[k]=0;
    }
    top++;
    stack[top]=node;
    visited[node]=1;
    while(top!=-1)
    {
        k=stack[top--];
        printf("%d\t",k);
        for(int i=0;i<max;i++)
        {
            if(adj[k][i]==1&&visited[i]==0)
            {
                top++;
                stack[top]=i;
                visited[i]=1;
            }
        }
    }
}