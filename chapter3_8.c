/*
Given a point (x, y), write a program to find out if it lies on X-axis, Yaxis
or origin.
*/

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0)
        printf("point lie on the orign.");
    else if(x==0 && y!=0)
        printf("point lie on the y-axis.");
    else
        printf("point lie on the x-axis.");

    return 0;
}
