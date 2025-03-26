#include <stdio.h>
#include "mystring.h"
 
int main() {
    const char *str = "Hello, World!";
    char ch = 'o';
    
    char *lastO = mystrrchr(str, ch);
    
    printf("%c %ld\no 8\n", ch, lastO - str);
    return 0;
}