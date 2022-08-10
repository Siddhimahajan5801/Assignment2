#include<stdio.h>

int main(){
    //a program to take the amount in INR and convert it into USD

    float x=0;
    
    printf("Enter the amount in INR\n");
    scanf("%f",&x);
     
     x= x / 76.23;   // 1USD=76.23INR
     printf("The amount in USD is %f\n",x);
    return 0;
}

