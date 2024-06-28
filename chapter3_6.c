/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
check if the three points fall on one straight line.
*/

#include<stdio.h>
#include<math.h>
int main(){

    int x1, x2, x3, y1, y2, y3;
    printf("Enter the value of (x1,y1) (x2,y2) (x3,y3) :");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

    int s1,s2,s3;
    s1 = abs ( x2- x1 ) / abs ( y2 - y1 ) ;
    s2 = abs ( x3 - x1 ) / abs ( y3 - y1 ) ;
    s3 = abs ( x3 - x2 ) / abs ( y3 - y2 ) ;

    if((s1==s2)&&(s1==s3))
        printf("Points fall on one straight line.");
    else
        printf("points donot fall in straught line.");
    
    return 0;

}
