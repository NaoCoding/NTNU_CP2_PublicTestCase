#include <stdio.h>
#include "mystring.h"
//#include <string.h>
//#define mystrcspn strcspn

int main(){

    char str[] = "092a09j0fanvm0fajw38j1895u31y5781hy5r831hh08tf02jrq2f3wpt24u8ty4379858934hnunuwiafbiuewvwv";
    int p = mystrcspn(str, "0123456789");
    printf("0\n");
    printf("%d\n", p);

    int p2 = mystrcspn(str , "wasd");
    printf("3\n");
    printf("%d\n" , p2);

    int p3 = mystrcspn(str , "\n\t\r");
    printf("90\n%d\n" , p3);

    return 0;

}