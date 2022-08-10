#include<stdio.h>

int main(){
    // program to print size of an int,a float,a char and a double type variable:

    int a; float b; char c; double d;

    printf("The size of an int is %d\n",sizeof(a));
    printf("The size of a float is %d\n",sizeof(b));
    printf("The size of a character is %d\n",sizeof(c));
    printf("The size of a double is %d\n",sizeof(d));

    return 0;
}