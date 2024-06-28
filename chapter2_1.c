/*
if a  five digit number is input through the keyboard, write a
program to calculate the sum of its digit.
*/

#include<stdio.h>
int main(){
    int n, sum=0, count=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n>0)
    {
        int temp = n%10;
        sum+=temp;
        n=n/10;
        count++;
    }
    if(count==5){
    printf("sum  is %d",sum);
    }else{
        printf("it is not a five-digit number");
    }
    
    return 0;
}