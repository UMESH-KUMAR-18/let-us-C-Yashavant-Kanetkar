/*
Write a program to check whether a triangle is valid or not, if three
angles of the triangle are entered through the keyboard. A triangle
is valid if the sum of all the three angles is equal to 180 degrees.
*/
#include<stdio.h>
int main(){
    float a1,a2,a3;
    printf("Enter the angele's value of the triangle :");
    scanf("%f %f %f",&a1,&a2,&a3);

    if(a1+a2+a3 == 180){
        printf("The triangle is a valid triangle \n");
    }else{
        printf("The triangle is not a valid triangle \n");
    }
    
    return 0;
}
