/*
Write a program to add two 6 x 6 matrices.
*/
#include<stdio.h>
int main(){
    int arr1[6][6],arr2[6][6],arr[6][6];

    printf("Enter the element of array 1 of 6*6.\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the element of array 2 of 6*6.\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    printf("Resultant matrix after multiply arr1 *arr2 is \n");

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\t");
        for(int j=0;j<6;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\t");
        for(int j=0;j<6;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }

    
}