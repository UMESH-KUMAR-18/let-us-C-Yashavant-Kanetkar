/*
Implement the Insertion Sort algorithm shown in Figure 13.3 on a
set of 25 numbers.
*/

#include<stdio.h>
#include<stdlib.h>
void insertionSort(int*,int);
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int *arr= (int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
insertionSort(arr,n);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
free(arr);
return 0;
}
void insertionSort(int* arr, int n){
    int i,j,key;
for(i=1;i<n;i++){
    j= i-1;
    key = arr[i];
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
}
}