#include <stdio.h>
#include "mystring.h"

int main (){
    const char str[] = "\\\t1j08hna9uwhgv9waehg947y9a2382ua0ifoha23";
    const char ch = '\\';
    char *ptr;

    ptr = strchr(str, ch);


    printf("%ld ", ptr - str + 1);
    printf("%c %s\n", ch, ptr);
    printf("1 \\ \\   1j08hna9uwhgv9waehg947y9a2382ua0ifoha23\n");

    ptr = strchr(str, '2');
    printf("%ld ", ptr - str + 1);
    printf("%c %s\n", ch, ptr);
    printf("28 \\ 2382ua0ifoha23\n");

    return(0);
}