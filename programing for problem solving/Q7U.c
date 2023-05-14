//write a c program to revers number (sample inpit:-2345, output:-54320)
#include <stdio.h>
int main() {
     int a,b=0;
     printf("Enter a number:- ");
     scanf("%d",&a);
     while(a!=0){
          b = (b*10) + (a%10);    
          a/=10;
     }
      printf("Revers output is :- %d",b);
     return 0;
}
//from chat gpt
/*
#include <stdio.h>

int main() {
    int a, b = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while (a != 0) {
        b = (b * 10) + (a % 10);
        a /= 10;
    }

    printf("reversed number: %d\n", b);

    return 0;
}
*/
