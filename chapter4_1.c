/*
If the lengths of three sides of a triangle are entered 
through the keyboard, write a program to check whether the 
triangle is an isosceles, an equilateral, a scalene or a 
right-angled triangle.
*/

#include<stdio.h>
int main(){
    int l1,l2,l3;
    printf("Enter the value of the three side of the triangle :");
    scanf("%d %d %d",&l1,&l2,&l3);

    if((l1==l2)&&(l2==l3))
    printf("The given triangle is a equilateral triangle.\n");
    else if((l1!=l2)&&(l2!=l3)&&(l3!=l1))
    printf("the given triangle is a scalence triangle.\n");
    else if(l1==l2 && l2!=l3 || l2==l3 && l3!=l1 || l3==l1 && l1!=l2 )
    printf("The given triangle is a isoscalence triangle.\n");
    
    if(l1*l1==l2*l2+l3*l3 ||l2*l2==l3*l3+l1*l1 ||l3*l3==l2*l2+l1*l1 ){
    printf("the triangle is a right angle triangle.\n");

    return 0;
    }

    return 0;
}