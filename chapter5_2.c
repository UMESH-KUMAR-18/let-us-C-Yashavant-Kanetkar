/*
Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
*/

#include<stdio.h>
#include<math.h>
int main(){
    int i=0;
    while(i<=500){
        int n=i,sum=0;
        while(n>0){
            int temp=n%10;
            sum+=pow(temp,3);
            n=n/10;
        }
        if(i==sum){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}