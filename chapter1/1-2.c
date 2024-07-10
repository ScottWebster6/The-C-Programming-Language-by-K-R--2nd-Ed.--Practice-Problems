#include <stdio.h>
//This exercise shows us that there are many "escape sequences" in C.
//https://www.ibm.com/docs/en/rdfi/9.6.0?topic=set-escape-sequences
int main() {
    printf("hello, world\n");
    printf("hello, \r world\n"); //carriage return, like a type writer.
    printf("hello, \v world\n"); //vertical tab.
    //... and many more!
}
