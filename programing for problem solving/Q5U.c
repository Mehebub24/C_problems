//write a c program to shift given data by two bits to the left
#include<stdio.h>
int main() {
     int a,b;
     printf("Enter a number:-");
     scanf("%d",&a);
     printf("The number value= %d \n",a);
     a<<=2;
     b=a;
     printf("The lef shift data is= %d",b);
     return 0;
}