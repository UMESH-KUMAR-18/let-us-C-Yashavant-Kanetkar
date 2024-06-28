/*
In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-Yellow-
Black (CMYK) format, with values of C, M, Y, and K varying on a real
scale from 0.0 to 1.0. Write a program that converts RGB color to
CMYK color as per the following formulae:
*/

#include<stdio.h>
int main(){
    float r,g,b;
    float white,cyan,magenta,yellow,black;

    printf("Enter the value of R G B :");
    scanf("%f %f %f",&r,&g,&b);

    if(r==0 && b==0 && g==0){
       cyan=0;
        magenta=0;
        yellow=0;
        black=1;
    }else{
        r = r / 255 ;
        g = g / 255 ;
        b = b / 255 ;
        if(r>g && r>b){
        white=r;
    }else if(g > b && g>r){
        white=g;
    }else{
        white=b;
    }
    cyan=(white-r)/white;
    magenta=(white-g)/white;
    yellow=(white-b)/white;
    black=1-white;
    }
    printf("rbg to cmyk is : %f %f %f %f",cyan,magenta,yellow,black);
    
    return 0;
}