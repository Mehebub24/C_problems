//write a c program to print odd number between 1 to 100;
#include<stdio.h>
int main() {
     int a;
     for(a=0;a<100;a++){
        if(a%2!=0){
            printf("%d",a);
        }
     }
     return 0;
}