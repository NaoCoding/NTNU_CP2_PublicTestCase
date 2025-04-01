#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("-1 -1 -1 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 0, 1, 1, 3));
    printf("%d ",  moveXiangqiRecord(board, 9, 1, 8, 3));
    printf("%d ",  moveXiangqiRecord(board, 0, 0, 3, 0));
    printf("%d\n",  moveXiangqiRecord(board, 9, 0, 6, 0));
    freeXiangqiRecord(board);

    return 0;
}
