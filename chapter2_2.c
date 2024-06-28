/*
write a program to receive cartesion co-ordinates(x,y)
of a point and convert them into polar co-ordinates(r,thetha)
*/

#include<stdio.h>
#include<math.h>
int main(){
    float x,y,thetha,r;
    printf("Enter the value of x and y repectively : ");
    scanf("%f %f",&x,&y);

    r = sqrt(x*x+y*y);
    thetha=atan2(y,x);//thetha is in radian
    thetha=thetha*180/3.14;//radian to degree
    printf("r=%f thetha=%f",r,thetha);
    return 0;
}