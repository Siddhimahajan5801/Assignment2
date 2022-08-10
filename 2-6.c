#include<stdio.h>

int main(){
    //Program which takes a character as an input and display its ASCII code:

    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);

    printf("The ASCII code of %c is %d",a,a);
    return 0;
}