#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 0 0 0 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 0, 1, 2, 2));
    printf("%d ",  moveXiangqiRecord(board, 7, 1, 5, 1));
    printf("%d ",  moveXiangqiRecord(board, 2, 7, 4, 7));
    printf("%d ",  moveXiangqiRecord(board, 5, 1, 5, 4));
    printf("%d\n", moveXiangqiRecord(board, 2, 1, 4, 1));
    //printXiangqiPlay(board);

    return 0;
}