/*
A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,count=4;
    printf("Enter a five-digit number : ");
    scanf("%d",&num);
    int n =num;
    while(num>0){
        int temp = num%10;
        sum+=temp*pow(10,count--);
        num=num/10;
    }
    if(sum!=n){
        printf("Reverse of entered number %d is %d.",n,sum);
    }else{
        printf("Reversed is same as %d ",n);
    }
    return 0;
}