#include <stdio.h>
#include "mystring.h"
int main() {
    char str[] = ",H\\e,,l`l,,o,\tWorld,This,Is,A,Test,,,";
    char mystr[] = ",H\\e,,l`l,,o,\tWorld,This,Is,A,Test,,,";
    const char delim[] = ",";
    
    printf("H\\e l`l o       World This Is A Test");
    printf("\n");
    char *mytoken = mystrtok(mystr, delim);
    while(mytoken != NULL){
        printf("%s " , mytoken);
        mytoken = mystrtok(NULL, delim);
    }
    printf("\n");

    return 0;
}