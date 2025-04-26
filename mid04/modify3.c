#include "myblock.h"
#include <stdio.h>
int main(){

    // 4.2.1 Add Single Block (3 pts)
    // 4.2.2 Delete Single Block (3 pts)
    // 4.2.3 Modify Color of Single Block (2 pts)
    Block *block = initBlock(2 , 2 , 2 , 0 , 0 , 0);
    printf("%d\n" , ModifyColor(block , 1 , 1 , 1 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 0 , 0 , 0 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 0 , 0 , 1 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 0 , 1 , 0 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 1 , 0 , 0 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 1 , 1 , 0 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 0 , 1 , 1 , 1 , 2 , 3));
    printf("%d\n" , ModifyColor(block , 1 , 0 , 1 , 1 , 2 , 3));
    
    printBlock(block);

    //printf("Total : %f" , total_score);

}