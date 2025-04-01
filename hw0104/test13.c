#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("-1 -1 -1 -1 -1 -1 -1 -1 -1\n");
    printf("%d ",moveXiangqiRecord(board, 3, 0, 5, 0));
    printf("%d ",moveXiangqiRecord(board, 6, 2, 7, 2));
    printf("%d ",moveXiangqiRecord(board, 7, 1, 7, 8));
    printf("%d ",moveXiangqiRecord(board, 0, 0, 7, 0));
    printf("%d ",moveXiangqiRecord(board, 9, 0, 0, 0));
    printf("%d ",moveXiangqiRecord(board, 0, 1, 0, 3));
    printf("%d ",moveXiangqiRecord(board, 9, 1, 9, 5));
    printf("%d ",moveXiangqiRecord(board, 0, 4, 0, 2));
    printf("%d\n",moveXiangqiRecord(board, 2, 7, 8, 7));

    return 0;
}