//write a c program to check the input number is odd or even
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to check the number is odd or even:-");
    scanf("%d",&a);
    if(a%2==0){
        printf("This number is even ");
    }else{
        printf("This number is odd");
    }

}