/* 1. insertion sort
   2. quick sort
   3. find out max-min using divide-conquer approach 
   4. binary search using recursive */
#include<stdio.h>
int i;
void insertionsort(int arr[], int n)
{
   int key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
   for(i=0;i<n;i++)
   	printf("%d ",arr[i]);
}
void main(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertionsort(a,n);
}
