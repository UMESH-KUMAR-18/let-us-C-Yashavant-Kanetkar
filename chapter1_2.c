/*
The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.
*/

#include<stdio.h>
int main(){
    float l,b,r;
    printf("Enter the length, breadth and radius respectly : ");
    scanf("%f %f %f",&l,&b,&r);

    printf("Area of the circle is %f and circumfrence is %f \n",3.14*r*r,2*3.14*r);
    printf("Area of the rectangle is %f and perimeter is %f",l*b,2*(l+b));
    return 0;
}