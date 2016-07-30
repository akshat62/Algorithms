#include<stdio.h>
void main(){
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);
     printf("First 8 bits: %d\n", n&255);
     printf("Second 8 bits: %d\n", (n>>8)&255);
     printf("Third 8 bits: %d\n", (n>>8)&255);
     printf("Last 8 bits: %d\n", (n>>8)&255);
}
