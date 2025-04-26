#include "myblock.h"
#include <stdio.h>
int main(){

    // 4.2.1 Add Single Block (3 pts)
    // 4.2.2 Delete Single Block (3 pts)
    // 4.2.3 Modify Color of Single Block (2 pts)
    Block *block = initBlock(1 , 1 , 1 , 0 , 0 , 0);

    printf("%d\n" , AddSingleBlock(block , 0 , 0 , 0 , 0 , 0 , 0));
    printBlock(block);

    //printf("Total : %f" , total_score);

}