/*
Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer, divide it continuously
by 8 till dividend doesn’t become zero, then write the remainders
obtained in reverse direction.)
*/

#include<stdio.h>
#include<math.h>
int main(){
    int num1,num2,p=0,oct=0;
    printf("Enter the number: ");
    scanf("%d",&num1);

    num2=num1;

    while(num1>0){
        int temp=num1%8;
        oct+=temp*pow(10,p);
        num1=num1/8;
        p++;
    }
    printf("given number %d equivalent ocatl is %d",num2,oct);
    return 0;
}