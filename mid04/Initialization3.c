#include "myblock.h"
#include <stdio.h>
int main(){

    // 4.1.1 Create a New Block Object (1 pts)
    // 4.1.2 Outout (3 pts)
    // 4.1.3 Free (1 pts)
    Block *block = initBlock(1 , 1 , 10 , 1 , 2 , 3);

    if(block){
        if(block->length[0] == 1 && block->length[1] == 1 && block->length[2] == 10){
            printf("0.25\n");
            printBlock(block);
        }
        if(!FreeBlock(block)){
            printf("0.25\n");
        }
    }

    //printf("Total : %f" , total_score);

}