#include<stdio.h>

int main(){
    //program to swap values of two int variables without using a third variable

    int a=4,b=9;
    printf("The value of a is %d and b is %d before swaping\n",a ,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d and b is %d after swaping\n",a,b);
    return 0;
}