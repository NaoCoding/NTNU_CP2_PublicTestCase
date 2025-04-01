#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("-1 -1 -1\n");
    printf("%d ",  moveXiangqiRecord(board, 2, 1, 5, 5));
    printf("%d ",  moveXiangqiRecord(board, 7, 1, 4, 5));
    printf("%d\n",  moveXiangqiRecord(board, 2, 7, 3, 1));
    freeXiangqiRecord(board);

    return 0;
}
