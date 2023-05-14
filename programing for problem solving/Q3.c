//write a c program to find largest of three number.(use if-else)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number:-");
   // scanf("%d,%d,%d" &a, &b, &c); my code
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        printf("A is largest number");
    }else if(b>a && b>c){
        printf("B is largest number");
    }else{
        printf("C is largest number");
    }
    return 0;
}