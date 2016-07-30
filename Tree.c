#include<stdio.h>
int dg[100][100];
int udg[100][100];
int i,j,v,n;

void printdg()
{
        printf("Directed Graph\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                        printf("%d\t",dg[i][j]);
                printf("\n");
        }
}        
void printudg()
{
        printf("Undirected Graph\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                        printf("%d\t",udg[i][j]);
                printf("\n");
        }
}

int main()
{
        int x,y;
        printf("Enter the no of nodes: ");
        scanf("%d",&n);
        int a[n][n];
        printf("Enter the no of vertices: ");
        scanf("%d",&v);

        for(i=0;i<v;i++)
        {
                for(j=0;j<v;j++)
                {
                        udg[i][j]=dg[i][j]=0;
                }
        }
        for(i=0;i<v;i++)
        {
                printf("Enter the edge: ");
                scanf("%d%d",&x,&y);
                x--;
                y--;
                dg[x][y]=1;
                udg[x][y]=1;
                udg[y][x]=1;
                
        }
       
        printudg();
                printdg();
        return 0;
}
        
