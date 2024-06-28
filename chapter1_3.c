/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
shorter sides. Thus, paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.
*/

#include<stdio.h>
int main(){
    int a=1189 , b=841;

    for(int i=0;i<9;i++){
        printf("printer paper size of A%d is %d %d \n",i,a,b);
        int c=a;
        a=b;
        b=c/2;
    }
    return 0;
}