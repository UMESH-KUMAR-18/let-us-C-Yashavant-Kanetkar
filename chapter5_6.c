/*
Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.
*/
#include<stdio.h>
int main(){
    int n,i=1,num,flag=0,big,small;
    printf("Enter the no of digit you want to enter : ");
    scanf("%d",&n);

    while (i<=n)
    {
       printf("Enter the %d number: ",i);
       scanf("%d",&num);

        if(flag==0){
            big=small=num;
            flag=1;
        }else{
            if(num>big){
                big=num;
            }else if(num<small){
                small=num;
            }
        }
        i++;
    }
    printf("The range for the set of number is %d:",big-small<0?big-small*-1:big-small);
    return 0;
}