/*
two number are input through the keyboard into two locations
C and D, Write a program to interchange the contents of C and D;
*/

#include<stdio.h>
int main(){
    int C,D;
    printf("Enter the value of C and D respectivily :");
    scanf("%d %d",&C,&D);
     printf("Values after interchange C: %d and D: %d \n",C,D);
    int temp=C;
    C=D;
    D=temp;
    printf("Values after interchange C: %d and D: %d",C,D);
    return 0;
}