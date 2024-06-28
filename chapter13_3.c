/*
Write a program using pointers to find the smallest number in an
array of 25 integers.
*/

#include<stdio.h>
#include<stdlib.h>
int min(int*,int);

int main(){
int n,minimum;
printf("Enter the size of the array: ");
scanf("%d",&n);
int* arr = (int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
minimum=min(arr,n);
printf("the minimum element out of %d element is : %d",n,minimum);
free(arr);
return 0;
}
int min(int* arr, int n){
int minimum=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<minimum){
        minimum=arr[i];
    }
}
return minimum;
}