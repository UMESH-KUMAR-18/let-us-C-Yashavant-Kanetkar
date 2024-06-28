/*
If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            printf("This array doesn't meet he specified conditions.");
            free(arr);
            return 0;
        }
    }
    printf("Meeting the specified conditions.");
    free(arr);
return 0;
}