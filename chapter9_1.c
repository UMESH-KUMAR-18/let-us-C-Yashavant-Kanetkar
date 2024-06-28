/*
Given three variables x, y, z, write a function to circularly shift their
values to right. In other words, if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.
*/

#include<stdio.h>
void circular_shift(int*,int*,int*);
int main(){
int x,y,z;
printf("Enter the value of x,y,z respectively : ");
scanf("%d%d%d",&x,&y,&z);

printf("Before circularly shift x : y : z -> %d : %d : %d \n",x,y,z);
circular_shift(&x,&y,&z);
printf("After circularly shift x : y : z -> %d : %d : %d",x,y,z);
}

void circular_shift(int* x, int* y, int* z){
    int temp = *z;
    *z=*y;
    *y=*x;
    *x=temp;
}