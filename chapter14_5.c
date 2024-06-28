/*
Write a program to find if a square matrix is symmetric.
*/

#include<stdio.h>

int main(){
    int count=0;
    int arr[3][3];
    printf("Enter the element of the 3*3 matrix : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    //checking wheather the array is symmetric or not.
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(arr[i][j]==arr[j][i]){
                count++;
            }
        }
    }

    if(count==6){
        printf("The given matrix is Symmetric.");
    }else{
        printf("The given matrix is NOT Symmetric.");
    }

    return 0;

}