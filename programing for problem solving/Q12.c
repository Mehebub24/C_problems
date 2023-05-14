//write a c program to tack input in an array from the user & print them
#include<stdio.h>
int main() {
     int i , a[5];
     printf("Enter input :-");
     for(i=0;i<5;i++){
          scanf("%d",&a[i]);
     //scanf("%d",&a[i]);
     }
     printf("This is your input:- ");
     for(i=0;i<5;i++){
          printf("%d",a[i]);
     //printf("%d",a[i]);
     }
     return 0;
}