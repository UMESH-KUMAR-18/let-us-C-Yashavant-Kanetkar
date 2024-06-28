/*
If ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.
*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the ages of Ram, Shyam and Ajay repectly: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c){
        printf("Among them Ram is the oldest.");
    }else if(b<a && b<c){
        printf("Among them Shyam is the oldest.");
    }else{
        printf("Among them ajay is the oldest.");
    }
    return 0;
}