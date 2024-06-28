/*
The natural logarithm can be approximated by the following series.
If x is input through the keyboard, write a program to calculate the
sum of first seven terms of this series.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int x;
    double sum=0.0;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    for(int i=1;i<=7;i++){
        double temp=0.0;
        if(i==1){
            temp = pow(((x-1.0)/x),i);
        }else{
             temp = 1.0/2.0*pow(((x-1.0)/x),i);
        }
        sum+=temp;  
    }
    printf("the sum of first seven term of the series is :%0.2f ",sum);
    return 0;
}