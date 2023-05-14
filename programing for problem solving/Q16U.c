//Write a c program to find frequent of any given integer 
#include<stdio.h>
int main() {
     int num, digit, count[10]={0};
     printf("Enter 10 number :- ");
     scanf("%d",&num);
     while(num>0){
        digit = num % 10;
        count[digit]++;
        num /=10;
     }
     printf("Frequent of each digit in the integer:-\n");
     for(int i=0;i< 10;i++){
        printf("%d :%d \n",i, count[i]);
     }
     return 0;
}