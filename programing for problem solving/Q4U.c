//write a c program that swap two numbers without using a third variable 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter A number:- ");
    scanf("%d",&a);
    printf("Entenr B number:- ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: A = %d, B = %d\n", a, b);
    return 0;
}
/*
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
*/

