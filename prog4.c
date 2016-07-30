//input a square matrix and find out the sum of right diagonal elements and left diagonal elements.
#include<stdio.h>
void main(){
	int n,i,j,sum=0,s=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=0;i<n;i++){
	     for(j=0;j<n;j++){
	          if((i+j)==(n-1))
	               s=s+a[i][j];
	     }
	}
     for(i=0;i<n;i++)
          sum=sum+a[i][i];
     printf("%d-%d",sum,s);
}
