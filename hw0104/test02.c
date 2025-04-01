#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 2, 7, 2, 4));
    printf("%d ",  moveXiangqiRecord(board, 2, 1, 2, 5));

    freeXiangqiRecord(board);

    return 0;
}
