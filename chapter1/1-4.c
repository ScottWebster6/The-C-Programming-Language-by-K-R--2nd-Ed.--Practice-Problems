#include <stdio.h>
//Testing knowledge of while-loops.
//Really, just flip the equation around in your head. Don't forget to change the title, too!
int main() {
    printf("Celsius to Fahrenheit\n"); 
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius / (5.0/9.0)) + 32; 
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}