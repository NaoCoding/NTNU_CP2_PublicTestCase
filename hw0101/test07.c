#include <stdio.h>
#include "mystring.h"
//#include <string.h>
//#define mystrstr strstr

int main(){

    const char *haystack = "";
    const char *needle = "";
    printf("Segmentation fault (core dumped)\n");
    char *result = mystrstr(haystack, NULL);
    printf("error_not leaving\n");
}