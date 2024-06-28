/*
Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.
*/

#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length and breath of the rectangle :");
    scanf("%d %d",&l,&b);

    if((l*b)>2*(l+b)){
        printf("the area of the ractangle is greater than its perimeter.");
    }else{
        printf("the area of the rectangle is less than its perimeter.");
    }

    return 0;
}
