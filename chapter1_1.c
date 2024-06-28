/*
Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.
*/
//formula centigrade degree = (fr-32)*5.0/9.0

#include<stdio.h>
int main(){
float fr,cent;
printf("Enter the value of fahhrenheit :");
scanf("%f",&fr);
cent = (fr-32)*5.0/9.0;
printf("So the resultant centigrade value is : %0.3f",cent);
return 0;
}