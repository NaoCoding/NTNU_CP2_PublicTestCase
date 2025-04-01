#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n");
    printf("%d ",  moveXiangqiRecord(board, 2, 7, 2, 4));
    printf("%d ",  moveXiangqiRecord(board, 9, 1, 7, 2));
    printf("%d ",  moveXiangqiRecord(board, 3, 2, 4, 2));
    printf("%d ",  moveXiangqiRecord(board, 9, 8, 8, 8));
    printf("%d ",  moveXiangqiRecord(board, 0, 7, 2, 6));
    printf("%d ",  moveXiangqiRecord(board, 9, 7, 7, 8));
    printf("%d ",  moveXiangqiRecord(board, 0, 8, 0, 7));
    printf("%d ",  moveXiangqiRecord(board, 8, 8, 8, 3));
    printf("%d ",  moveXiangqiRecord(board, 0, 1, 2, 2));
    printf("%d ",  moveXiangqiRecord(board, 6, 8, 5, 8));
    printf("%d ",  moveXiangqiRecord(board, 3, 6, 4, 6));
    printf("%d ",  moveXiangqiRecord(board, 8, 3, 3, 3));
    printf("%d ",  moveXiangqiRecord(board, 2, 6, 4, 5));
    printf("%d ",  moveXiangqiRecord(board, 3, 3, 3, 2));
    printf("%d ",  moveXiangqiRecord(board, 2, 2, 1, 4));
    printf("%d ",  moveXiangqiRecord(board, 9, 0, 8, 0));
    printf("%d ",  moveXiangqiRecord(board, 4, 5, 5, 3));
    printf("%d ",  moveXiangqiRecord(board, 3, 2, 3, 3));
    printf("%d ",  moveXiangqiRecord(board, 5, 3, 7, 2));
    printf("%d\n", moveXiangqiRecord(board, 8, 0, 8, 3));
    printXiangqiRecord(board);

    freeXiangqiRecord(board);

    return 0;
}
