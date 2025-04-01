#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 0 0 0 -1 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 0, 2, 2, 4));
    printf("%d ",  moveXiangqiRecord(board, 9, 2, 7, 4));
    printf("%d ",  moveXiangqiRecord(board, 0, 1, 1, 3));
    printf("%d ", moveXiangqiRecord(board, 9, 1, 8, 3));
    printf("%d ",  moveXiangqiRecord(board, 2, 4, 0, 2));
    printf("%d\n", moveXiangqiRecord(board, 7, 4, 9, 2));
    
    freeXiangqiRecord(board);

    return 0;
}