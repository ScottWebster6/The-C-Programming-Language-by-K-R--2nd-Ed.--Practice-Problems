#include <stdio.h>
//Testing EOF. (In a terminal, it can be inputted by a keyboard macro. Windows: Ctrl+Z)
//EOF is a system defined non-character value. It can't be stored as a char, but we can store it as an int. 
int main() {
    int check = getchar() != EOF; //0 is false. Anything nonzero is true. 
    printf("%d", check);
}
