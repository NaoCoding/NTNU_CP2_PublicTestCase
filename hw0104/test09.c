#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("-1 -1 -1 -1n");
    printf("%d ",  moveXiangqiRecord(board, 0, 2, 1, 2));
    printf("%d ",  moveXiangqiRecord(board, 9, 6, 8, 5));
    printf("%d ",  moveXiangqiRecord(board, 0, 3, 1, 3));
    printf("%d\n", moveXiangqiRecord(board, 9, 3, 8, 3));
    
    freeXiangqiRecord(board);

    return 0;
}