#include <stdio.h>
//Testing knowledge of getchar() and putchar() still. 
/*
    I wanted to challenge myself, so I'm restricting the usage of techniques
    until they're actually mentioned in the book. (Enums, booleans, else ...)
*/

int main() {
    int c;
    int last = 0; //default value
    while((c = getchar()) != EOF) {
        if(c == ' '){
            if(last != ' ') {
                putchar(c);
            }
        } //else 
        if(c != ' ') {
            putchar(c);
        }
        last = c;
    }   
}
