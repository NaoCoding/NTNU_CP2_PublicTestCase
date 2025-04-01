#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 0, 4, 1, 4));
    printf("%d\n", moveXiangqiRecord(board, 1, 4, 2, 4));

    freeXiangqiRecord(board);

    return 0;
}
