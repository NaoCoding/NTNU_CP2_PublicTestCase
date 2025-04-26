#include "myblock.h"
#include <stdio.h>
int main(){

    // 4.1.1 Create a New Block Object (1 pts)
    // 4.1.2 Outout (3 pts)
    // 4.1.3 Free (1 pts)
    Block *block = initBlock(0 , 0 , 0 , 0 , 0 , 0);

    if(!block) printf("0.25\n");
    printBlock(block);
    if(FreeBlock(block) == -1)printf("0.25\n");
    //printf("Total : %f" , total_score);

}