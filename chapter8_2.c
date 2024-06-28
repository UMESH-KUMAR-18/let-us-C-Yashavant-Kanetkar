/*
Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not.
*/

#include<stdio.h>

void isLeap(int n){
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
        printf("given year is a leap year.");
    }else{
        printf("given year is not a leaf year.");
    }
}
int main(){
    int n;
    printf("enter the year : ");
    scanf("%d",&n);
    isLeap(n);
    return 0;
}