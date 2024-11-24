/******************
Name:Ori Bahat-Petel
ID:
Assignment:ex1
*******************/
#include <stdio.h>

int main() 
{
    int x,y,z,n;
    int b3,b5,b7,b11;
  
    //ex 1
    printf("What bit:\n");
    printf("Please enter a number:\n");
    scanf("%d",&x); 
    printf("Please enter a position:\n");
    scanf("%d",&y);
    z = (x >> y) & 1;
    printf("The bit in position %d of number %d is: %d",y,x,z );
    printf("\n\n");
  
    //ex 2
    printf("Set bit:\n");
    printf("Please enter a number:\n");
    scanf("%d",&x); 
    printf("Please enter a position:\n");
    scanf("%d",&y);
    z = x | (1 << y);
    n = x & ~(1 << y);
    printf("Number with bit %d set to 1: %d\n",y,z);
    printf("Number with bit %d set to 0: %d",y,n);
    printf("\n\n");
  
    //ex 3
    printf("Toggle bit:\n");
    printf("Please enter a number:\n");
    scanf("%d",&x); 
    printf("Please enter a position:\n");
    scanf("%d",&y);
    z = x ^ (1 << y);
    printf("Number with bit %d toggled: %d",y,z);
    printf("\n\n");
  
    //ex 4
    printf("Even - Odd:\n");
    printf("Please enter a number:\n");
    scanf("%d",&x); 
    y = (x & 1) ^ 1;
    printf("%d",y);
    printf("\n\n");
  
    //ex 5
    printf("3, 5, 7, 11:\n");
    printf("Please enter the first number (octal):\n");
    scanf("%o",&x); 
    printf("Please enter the second number (octal):\n");
    scanf("%o",&y);
    z = x + y;
    b3 = 1 & (z >> 3);
    b5 = 1 & (z >> 5);
    b7 = 1 & (z >> 7);
    b11 = 1 & (z >> 11);
    printf("The sum in hexadecimal: %X\n",z);
    printf("The 3,5,7,11 bits are: %d%d%d%d",b3,b5,b7,b11);
    printf("\nBye!");
    return 0;
}
