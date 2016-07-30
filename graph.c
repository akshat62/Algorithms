#include<stdio.h>
int main()
{
     int i,j,a1,scr,des;
     int node,value;
     printf("Enter the number of nodes: ");
     scanf("%d",&node);
     int m=node;
     int a[m][m],b[m][m];
     for(i=1;i<=m;i++)
          for(j=1;j<=m;j++)
               a[i][j]=0;
     do{
          printf("Enter the source and destination: ");
          scanf("%d%d",&scr,&des);
          printf("Enter the value: ");
          scanf("%d",&value);
          
          for(i=1;i<=m;i++)
          {
               for(j=1;j<=m;j++)
               {
                    a[scr][des]=value;
                    if(value!=0) b[i][j]=1;
               }
          
          }
          printf("To continue press 1: ");
          scanf("%d",&a1);
     }while(a1==1);
     for(i=1;i<=m;i++)
     {
          for(j=1;j<=m;j++)
               printf("%d\t",a[i][j]);
          printf("\n");
     }

     return 0;
}
