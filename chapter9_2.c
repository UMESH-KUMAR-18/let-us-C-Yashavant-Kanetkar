/*
Define a function that receives weight of a commodity in Kilograms
and returns the equivalent weight in Grams, Tons and Pounds. Call
this function from main( ) and print the results in main( ).
*/

#include<stdio.h>
void weight(float);
int main(){
float kg;
printf("Enter the value of weight in kg(upto 2 decimal value): ");
scanf("%f",&kg);
weight(kg);
}

void weight(float x){
    float grams , tons , pounds;
    printf("%0.2f kg in grams = %0.2f \n",x,x*1000);
    printf("%0.2f kg in tons = %0.2f \n",x,x*.001);
    printf("%0.2f kg in pounds = %0.2f \n",x,x*2.204);
}