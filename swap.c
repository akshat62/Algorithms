#include<stdio.h>
int swap(int a,int b){
     a^=b^=a^=b;
     printf("Swapped Value a=%d, b=%d\n",a,b);
}
void swapp(int *a,int *b){
     int temp=*a;
     *a=*b;
     *b=temp;
     printf("Swapped Value a=%d, b=%d\n",*a,*b);
}    
void main(){
     int c,d;
     printf("Enter two numbers: ");
     scanf("%d %d",&c,&d);
     swap(c,d);
     swapp(&c,&d);
}
