//Write a c program to pritn all perfect number between 1 to n 
/*
what is perfect number?
perfect number, a positive integer that is equal to the sum of its proper divisors.
*/
#include<stdio.h>
int main() {
     int a, sum =0, p,i;
     printf("Enter a the number till you want parfect number:- ");
     scanf("%d",&a);
     for ( i=1;i<=a;i++){
       p=1;
       while( p<=(i/2)){
         if (i % p == 0) {
                sum = sum + p;
                p++;
            }
       }
        if (sum == i ){
          printf("%d",i);
            sum = 0;
        }
     }
     return 0;
}
