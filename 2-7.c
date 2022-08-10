#include<stdio.h>

int main(){
    //Program to find position of first 1 in LSB:

    int x=244;
   int result=0, count=0;

   while (x!=0){
    result=x&1;  //logic---> 1&1=1 and 0&1=0
    count++;

    if (result==1){
        printf("The position of first 1 in LSB is %d\n",count);
        break;
    }
    x=x>>1;
   }
    return 0;
}