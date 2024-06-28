/*
If value of an angle is input through the keyboard, write
 a program to print all its Trigonometric ratios.
*/

#include<stdio.h>
#include<Math.h>
int main(){
    float angle;
    printf("Enter the value of the angle: ");
    scanf("%f",&angle);
    angle=angle*3.14/180; //angle to radian
    printf("value of sin(%0.2f): %f \n",angle,sin(angle));
    printf("value of cos(%0.2f): %f \n",angle,cos(angle));
    printf("value of tan(%0.2f): %f \n",angle,tan(angle));
    return 0;
}