#include <stdio.h>
#include "mystring.h"
//#include <string.h>   
//#define mystrstr strstr

int main(){

    const char *haystack = "";
    const char *needle = "";
    char *result = mystrstr(haystack, needle);
    printf("\n");
    printf("%s\n", result);
}