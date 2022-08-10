#include<stdio.h>

int main(){
    //program to swap values of two int variables:

    int a=5, b=6;
    int temp;
     printf("The value of a is %d and b is %d before swaping\n",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d and b is %d after swaping\n",a,b);
     
    return 0;
}