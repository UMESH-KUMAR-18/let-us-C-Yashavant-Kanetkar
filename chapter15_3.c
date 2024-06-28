/*
A Credit Card number is usually a 16-digit number. A valid Credit 
Card number would satisfy a rule explained below with the help of 
a dummy Credit Card number—4567 1234 5678 9129. Start with 
the rightmost - 1 digit and multiply every other digit by 2.
*/

#include<stdio.h>

int main(){
    char card[16];
    printf("Enter the card number.\n");
    scanf("%s",card);
    int sum=0;
    int digit=0;
    for(int i=0;i<16;i++){
        digit=card[i]-'0';
        if(i%2==0){
            digit*=2;
            if(digit>10){
                digit-=9;
            }
            printf("%d->",digit);
            sum+=digit;
        }else{
            printf("%d->",digit);
            sum+=digit;
        }
        printf("\t");
    }

    if(sum%10==0){
        printf("A Valid Card %d",sum);
    }else{
        printf("Not a valid card %d",sum);
    }

    return 0;
}