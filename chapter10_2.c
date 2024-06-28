/*
Write a recursive function to obtain the sum of first 25 natural
numbers
*/

#include<stdio.h>
int sum(int);
int main(){
    int s=0;
    s=sum(25);
    printf("Sum of first 25 natural number: %d",s);
}
int sum(int n){
    if(n<1){
        return 0;
    }
    return n+sum(n-1);
}

