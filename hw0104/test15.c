#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 0 0 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 0, 4, 1, 4));
    printf("%d ",  moveXiangqiRecord(board, 9, 4, 8, 4));
    printf("%d ",  moveXiangqiRecord(board, 1, 4, 1, 3));
    printf("%d\n", moveXiangqiRecord(board, 8, 4, 8, 3));
    
    freeXiangqiRecord(board);

    return 0;
}