#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 0 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 2, 7, 2, 4));
    printf("%d ",  moveXiangqiRecord(board, 9, 1, 7, 2));
    printf("%d\n", moveXiangqiRecord(board, 2, 7, 5, 7));

    freeXiangqiRecord(board);

    return 0;
}
