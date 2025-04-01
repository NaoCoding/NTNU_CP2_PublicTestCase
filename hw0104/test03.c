#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 2, 1, 5, 1));
    printf("%d\n", moveXiangqiRecord(board, 7, 1, 1, 1));

    freeXiangqiRecord(board);

    return 0
}
