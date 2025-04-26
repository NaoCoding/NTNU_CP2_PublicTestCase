#include "myblock.h"
#include <stdio.h>
int main(){

    // 4.2.1 Add Single Block (3 pts)
    // 4.2.2 Delete Single Block (3 pts)
    // 4.2.3 Modify Color of Single Block (2 pts)
    Block *block = initBlock(2 , 2 , 3 , 255 , 0 , 0);
    DeleteSingleBlock(block , 1 , 1 , 1);
    DeleteSingleBlock(block , 1 , 0 , 1);
    ModifyColor(block , 1 , 0 , 0 , 0 , 255 , 0);
    ModifyColor(block , 1 , 1 , 0 , 0 , 255 , 0);
    ModifyColor(block , 0 , 0 , 0 , 0 , 0 , 255);
    ModifyColor(block , 0 , 1 , 0 , 0 , 0 , 255);
    ModifyColor(block , 1 , 1 , 2 , 100 , 100 , 0);
    ModifyColor(block , 1 , 0 , 2 , 100 , 100 , 0);

    saveBlockToImages(block , 100 , "result");
    
    //printBlock(block);

    //printf("Total : %f" , total_score);

}