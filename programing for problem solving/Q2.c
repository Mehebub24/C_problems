//write a c program to find whether a given year is leap year or not 
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year to cheak year is leap year or not :-");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is a leap year",year);
    }else if(year%400==0){
         printf("%d is a leap year",year);
    }else if(year%100==0){
         printf("%d is a leap year",year);
    }else{
         printf("%d is not leap year",year);
    }
    return 0;
}