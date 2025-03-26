#include <stdio.h>
#include "mystring.h"

int main() {
    char str[] = "";
    char mystr[] = "";
    const char delim[] = ",";
    
    printf("\n");
    char *mytoken = mystrtok(mystr, delim);
    while(mytoken != NULL){
        printf("%s " , mytoken);
        mytoken = mystrtok(NULL, delim);
    }
    printf("\n");

    return 0;
}