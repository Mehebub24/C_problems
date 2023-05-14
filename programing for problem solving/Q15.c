//Write a c program to print a multiplictun table of any given number 
#include<stdio.h>
int main() {
     int a,i;
     printf("Enter a number for multipliction table :-");
     scanf("%d",&a);
     for(i=1;i<=10;i++){
        int b=i*a;
        printf("%dx%d=%d\n",i,a,b);
     }
     return 0;
}