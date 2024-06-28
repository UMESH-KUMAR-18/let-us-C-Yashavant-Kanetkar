/*
Define a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0. Would you get any advantage if you develop these functions to
work on call be reference principle?
*/

#include<stdio.h>
#include<math.h>
float distance(int,int,int,int);
float area();
float triArea(float,float,float);

int main(){
    int x1,x2,y1,y2;
    float z;
    printf("Enter the co-ordinate of 2 points:");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    z= distance(x1,y1,x2,y2);
    printf("Distance between the 2 point is :%0.2f \n",z);
    area();
}

float distance(int x1,int y1, int x2, int y2){
    float m,d;
    m=pow((x2-x1),2)+pow((y2-y1),2);
    d=sqrt(m);
    return d;
}

void area(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    float a,b,c,d;
    float a1,b1,c1,total,area1,area2,area3;
    printf("Enter the value of 3 points: ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    a=distance(x1,y1,x2,y2);
    b=distance(x1,y1,x3,y3);
    c=distance(x2,y2,x3,y3);
    d=triArea(a,b,c);
    printf("Area of the triangle for 3 point is: %.2f \n",d);
    printf("Now enter the co-ordinate of the point to check it lie inside or outside: ");
    scanf("%d%d",&x4,&y4);
    a1=distance(x1,y1,x4,y4);
    b1=distance(x2,y2,x4,y4);
    c1=distance(x3,y3,x4,y4);
    area1=triArea(a,a1,b1);
    area2=triArea(b,a1,c1);
    area3=triArea(b,b1,c1);
    total=area1+area2+area3;
    if(total=d){
        printf("Lies inside the triangle.")
    }else{
        printf("Lies outside the triangle.")
    }
}

float triArea(float a ,float b,float c){
    float s,d;
    s=(a+b+c)/2;
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    return d;
}