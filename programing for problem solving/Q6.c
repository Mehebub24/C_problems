//write a c progarm tha read a floting -point number and finds the range where it belongs from frour ranges .ranges are : 0-30,31-50,51-80,81-100(use if-else)
#include<stdio.h>
int main() {
     int a;
     printf("Enter a number:-");
     scanf("%d",&a);
     if(0<=a && 30>=a){
        printf("The numbe in the range of 0-30");
     }else if(31<=a && 50>=a){
         printf("The numbe in the range of 31-50");
     }else if(51<=a && 80>=a){
         printf("The numbe in the range of 51-80");
     }else{
         printf("The numbe in the range of 81-100");
     };
     return 0;
}