/*
Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)
*/

#include<stdio.h>
int main(){
    int x,y,r;
    int dis,d;

    printf("Enter the cordinates : ");
    scanf("%d %d",&x,&y);

    dis=x*x+y*y;
    d=r*r;

    if(dis==d)
        printf("points are on the circle.");
    else if (dis<r)
    {
        printf("points are inside the circle.");
    }else{
        printf("points are outside the circle.");
    }
    
    return 0;
}
