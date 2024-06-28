/*
Write a program that will read a line and delete from it all 
occurrences of the word ‘the’.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[80], str1[80];
    char *s, *p;

    puts("Enter the string:");
    fgets(str, sizeof(str), stdin);

    s = str;
    p = str1;

    while (*s) {
        if ((*s == 'T' || *s == 't') && 
            (*(s + 1) == 'h') && 
            (*(s + 2) == 'e') && 
            (*(s + 3) == ' ' || *(s + 3) == '\0' || *(s + 3) == '\n')) {
            s += 3;
            if (*s == ' ') {
                s++; // Skip the space after "the"
            }
        } else {
            *p = *s;
            p++;
            s++;
        }
    }

    *p = '\0'; // Null-terminate the resulting string

    puts("Here is the output sentence:");
    puts(str1);

    return 0;
}
