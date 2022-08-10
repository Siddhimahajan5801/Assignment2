#include<stdio.h>

int main(){
    //A program to make last digit of no. stored in a variable as zero:

    int x=2345; //given number
    int r;

    r=x%10;
    x=x-r;

    printf("The number now is %d",x);

    return 0;
}