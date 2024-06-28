/*
Write a program to multiply any two 3 x 3 matrices.
*/

#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],arr[3][3];

    printf("Enter the element of array 1 of 3*3.\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the element of array 2 of 3*3.\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=arr1[i][j]*arr2[i][j];
        }
    }

    printf("Resultant matrix after multiply arr1 *arr2 is \n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\t");
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\t");
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }

    
}