#include <stdio.h>
//Test the intricacies of getchar(). 
/* 
    getchar() is supposed to read a single character, but the input buffer
    in stdio allows a multicharacter input. Input buffers are read 
    one character at a time for every call of getchar(). So even if multiple
    inputs are prompted, the character inputs are read in the order they are 
    inputted into the stdio stream buffer. Since we loop until EOF, we read 
    through every character in the stream buffer.
*/


int main()
{
    //Write a program to count blanks, tabs, and newlines.
    int c, nls, tabs, blanks;
    nls = tabs = blanks = 0; 

    while ((c = getchar()) != EOF){
        if(c == '\n')
            ++nls;
        if(c == '\t')
            ++tabs; 
        if(c == ' ')
            ++blanks;
    }
    printf("Blanks: %d\n Tabs: %d\n Newlines: %d\n", blanks, tabs, nls);
}