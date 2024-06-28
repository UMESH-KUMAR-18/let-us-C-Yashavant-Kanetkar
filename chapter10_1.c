/*
A positive integer is entered through the keyboard, write a function
to find the binary equivalent of this number:
(1) Without using recursion
(2) Using recursion
*/


#include <stdio.h>
#include <math.h>

// Function prototypes
void wrbinary(int);    // without using recursion
void binary(int);      // using recursion

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("The binary equivalent using recursion is: ");
    binary(n);
    printf("\n");
    
    printf("The binary equivalent without using recursion is: ");
    wrbinary(n);
    printf("\n");

    return 0;
}

// Using recursion
void binary(int n) {
    if (n == 0) {
        return;
    }
    binary(n / 2);
    printf("%d", n % 2);
}

void wrbinary(int n){
    int num=0;
    int count=0;
    while (n>0)
    {
        int r=n%2;
        num+=pow(10,count++)*r;
        n=n/2;
    }
    printf("%d", num);
}

