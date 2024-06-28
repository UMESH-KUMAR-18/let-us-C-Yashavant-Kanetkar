/*
Write a program to find the absolute value of a number entered
through the keyboard.
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n<0){
        n=n*-1;
    }
        printf("Absolute value is %d.",n);
    
    return 0;
}
