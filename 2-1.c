#include<stdio.h>

int main(){
    //Program to print unit digit of a given number 

    int a=1259;  //given number
    int r;
    r=a%10;
    printf("The unit digit of the given number is %d",r);
    return 0;
}