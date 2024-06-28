/*
Write macro definitions with arguments for calculation of Simple
Interest and Amount. Store these macro definitions in a file
“interest.h”. Include this file in your program, and use the macro
definitions for calculating Simple Interest and Amount.
*/
#include<stdio.h>
#include "intrest.h"

int main(){
    int p,n;
    float si,amt,r;

    printf("Enter principle, no. of year and rate of intrest: ");
    scanf("%d%d%f",&p,&n,&r);

    si= SI(p,n,r);
    amt=AMT(si,p);
    printf("Simple intrest is: %f\n Amount is: %f\n",si,amt);

}