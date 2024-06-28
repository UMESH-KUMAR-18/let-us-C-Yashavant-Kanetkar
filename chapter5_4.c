/*
Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.
*/

#include<stdio.h>
int main(){
    char input='y';
    int pos=0,neg=0,zero=0,num;

    while(input=='y' || input=='Y'){
        printf("Enter the number : ");
        scanf("%d",&num);

        if(num==0){
            zero++;
        }else if(num>0){
            pos++;
        }else{
            neg++;
        }
        fflush(stdin);
        printf("Want to enter another number or not:");
        scanf("%c",&input);
    }
    printf("Number of zero is %d:\n",zero);
    printf("Number of positive number is %d:\n",pos);
    printf("Number of negative number is %d:\n",neg);

    return 0;
}