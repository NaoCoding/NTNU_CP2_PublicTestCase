#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord * board = initXiangqiRecord();

    printf("-1\n");
    printf("%d\n", moveXiangqiRecord(board, 3, 4, 9, 4));

    freeXiangqiRecord(board);

    return 0;
}
