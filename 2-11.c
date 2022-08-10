#include<stdio.h>

int main(){

    /*a program to input a number from user and also input a digit.
    Append a digit in the number and print the resulting number*/

    int x,d;
    printf("Enter a number and a digit\n");
    scanf("%d %d",&x,&d);

    x=(x*10)+d;
    printf("The resulting number is %d",x);

    return 0;
}