//Quick Sort
#include<stdio.h>
int main()
{
   int num,i;
   printf("Enter number of elemnts: ");
   scanf("%d",&num);
   int a[num];
   printf("Enter the array: ");
   for(i=0;i<num;i++)
  	 scanf("%d",&a[i]);
   int low=0;
   int high=num;
   Quicksort(a,low,high);
   for(i=0;i<num;i++)
  	 printf("%d ",a[i]);
   return 0;
}
Quicksort(int a[],int low,int high)
{
	if(low<high)
	{ 
		int p;
	        p= Partition(a,low,high);
	        Quicksort(a,low,p-1);
	        Quicksort(a,p+1,high);
	  
	 }
 }
int Partition(int a[],int low,int high)
 {
  int pivot=low; int i=low+1; int j=high;  
  while(i<j)
   {
      while(a[i]<a[pivot])
        i++;
      while(a[j]>a[pivot])
        j--;
    if(i<j)
      { int temp=a[i];a[i]=a[j];a[j]=temp;
        } 
   }
   int temp1=a[j];
   a[j]=a[pivot];
   a[pivot]=temp1;
 return j;
 }
