#include<stdio.h>

int main(){
    //program to input a three digit number and display the sum of the digits:

   int a,n1,n2,n3,n;

    printf("Enter a three digit number\n");
    scanf("%d",&a);
    printf("The number is %d\n",a);

    n1=a%10;
    n2=a/10;
    n2=n2%10;
    n3=a/100;

    printf("\nThe sum of the digits of %d is %d+%d+%d=%d",a,n3,n2,n1,n1+n2+n3);

    return 0;
}