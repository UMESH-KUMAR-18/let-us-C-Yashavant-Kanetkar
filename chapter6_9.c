/*
Write a program to produce the following output:
                1
            2       3
        4       5       6
    7       8       9       10
*/
#include<stdio.h>
int main(){
  int i, j, spc, rows=4, k, t = 1;  // Declare variables 'i' and 'j' for loop counters, 'spc' for spaces, 'rows' for user input, 'k' for loop counter, 't' for incrementing numbers.

   spc = rows+4-1;

    for (i = 1; i <= rows; i++) {
        for (k = spc; k >= 1; k--) {
               printf(" ");
        }
    for (j = 1; j <= i; j++)
          printf("%d ", t++);
    printf("\n");
        spc--;
    }
    return 0;
}