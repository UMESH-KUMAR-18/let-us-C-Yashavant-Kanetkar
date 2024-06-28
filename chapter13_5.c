/*
Write a program which performs the following tasks:
- Initialize an integer array of 10 elements in main( )
- Pass the entire array to a function modify( )
- in modify( ) multiply each element of array by 3
− return the control to main( ) and print the new array elements in main( )
*/

#include<stdio.h>
#include<stdlib.h>

void modify(int*,int);

int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the array element : ");
int* arr = (int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
modify(arr,n);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}

void modify(int* arr, int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*3;
    }
}
