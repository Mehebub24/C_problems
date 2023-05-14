#include<stdio.h>
int main() {
     int a=0;
     while(a<=100){
               if(a%2 != 0){
            printf("%d",a);
        }
          
          a++;
          if(a>100){

               break;
          }
     }
     return 0;

}