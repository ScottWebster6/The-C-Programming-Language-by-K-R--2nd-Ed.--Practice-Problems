#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    //Write a program to count blanks, tabs, and newlines.
    int nls = 0; 
    int tabs = 0;
    int blanks = 0; 
    int c; 
    while ((c = getchar()) != EOF){
        if(c == '\n')
            nls++;
        if(c == '\t')
            tabs++; 
        if(c = ' ')
            blanks++;
    }
    printf("Blanks: %d\n Tabs: %d\n Newlines: %d\n", blanks, tabs, nls);
}