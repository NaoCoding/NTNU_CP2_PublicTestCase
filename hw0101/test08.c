#include <stdio.h>
#include "mystring.h"
//#include <string.h>
//#define mystrpbrk strpbrk

int main(){

    char str[] = "092a09j0fanvm0fajw38j1895u31y5781hy5r831hh08tf02jrq2f3wpt24u8ty4379858934hnunuwiafbiuewvwv";
    char *p = mystrpbrk(str, "0123456789");
    printf("092a09j0fanvm0fajw38j1895u31y5781hy5r831hh08tf02jrq2f3wpt24u8ty4379858934hnunuwiafbiuewvwv\n");
    printf("%s\n", p);

    char *p2 = mystrpbrk(str , "wasd");
    printf("a09j0fanvm0fajw38j1895u31y5781hy5r831hh08tf02jrq2f3wpt24u8ty4379858934hnunuwiafbiuewvwv");
    printf("\n%s\n" , p2);

    char *p3 = mystrpbrk(str , "\n\t\r");
    printf("%s\n" , p3);
    printf("error_not leaving");

    return 0;

}