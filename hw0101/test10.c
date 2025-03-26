#include <stdio.h>
#include "mystring.h"
//#include <string.h>
//#define mystrspn strspn

int main(){

    char str[] = "Hello, World!";

    printf("%d\n1\n",mystrspn(str, "H"));
    printf("%d\n5\n",mystrspn(str, "Hello"));
    printf("%d\n6\n",mystrspn(str, "Hello,"));
    printf("%d\n0\n",mystrspn(str, "World"));
    printf("%d\n13\n",mystrspn(str, "Hello, World!"));
    printf("%d\n13\n",mystrspn(str, "Hello, World! "));
    printf("%d\n" , mystrspn(str, NULL));
    printf("error_not leaving\n");
    
}