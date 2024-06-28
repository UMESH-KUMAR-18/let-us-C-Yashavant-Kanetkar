/*

Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.

*/

#include<stdio.h>

int main(){
    int neg=0,pos=0,even=0,odd=0;
int arr[25];
for(int i=0;i<25;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<25;i++){
    arr[i]<0?neg++:pos++;
    arr[i]%2==0?even++:odd++;
}
printf("No of negative element : %d.\n",neg);
printf("No of positive element : %d.\n",pos);
printf("No of even element : %d.\n",even);
printf("No of odd element : %d.\n",odd);
}