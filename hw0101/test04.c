#include <stdio.h>
#include "mystring.h"

int main(){

    const char *haystack = "1\\\\\\\\\\\\\\";
    const char *needle = "\\\\\\\\\\\\";
    char *result = mystrstr(haystack, needle);
    printf("\\\\\\\\\\\\\\\n");
    printf("%s\n", result);

    printf("%s\n" , haystack);
    printf("%s\n" , mystrstr(haystack, "1"));
}