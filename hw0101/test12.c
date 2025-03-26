#include <stdio.h>
#include "mystring.h"
 
int main(){

    char str[] = "helloHellohelloHellohelloHel1ohe1lo";
 
    char chr = '1';
 
    char* ptr = mystrrchr(str, chr);
 
    printf("%c %s %ld\n1 helloHellohelloHellohelloHel1ohe1lo 32\n",chr, str, ptr - str);
    return 0;
}