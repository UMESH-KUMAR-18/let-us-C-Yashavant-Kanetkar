/*
When interest compounds q times per year at an annual rate of r %
 for n years, the principal p compounds to an amount a as per the 
 following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the 
corresponding as.
*/

#include<stdio.h>
#include<math.h>
int main(){
    float p,r,q,n;
    double a;
    for(int i=1;i<=10;i++){
        printf("Enter the %d set value of p,r,q,n: ",i);
        scanf("%f %f %f %f",&p,&r,&q,&n);

        a=p*pow((1+(r/q)),(n*q));
        printf("Amount a = %0.2f \n",a);
    }
    return 0;
}