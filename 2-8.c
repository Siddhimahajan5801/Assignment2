#include<stdio.h>

int main(){

    //a program to check whether the given number is even or odd using a bitwise operator:
   
   //logic--> we know that even no. have 0 in LSB whereas odd no. have 1 in LSB and 1&1=0,0&1=0

   int x=58; // given number
   int result;

   result= x&1;

   if (result == 1)
   printf("The given number is odd\n");

   else
    printf("The given number is even\n");
    return 0;
}