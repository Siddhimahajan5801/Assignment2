#include<stdio.h>

int main(){

    //program to take a 3-digit no.from the user and rotate its digits by 1 position towards the right

       int n,n1,n2,n3;
      printf("Enter a three digit number\n");
      scanf("%d",&n);

      n1=n%10;
      n1=n1*100;

      n2=n/100;
      n2=n2*10;

      n3=n/10;
      n3=n3%10;

      n=n1+n2+n3;

      printf("The  new number is %d\n",n);

    return 0;
}