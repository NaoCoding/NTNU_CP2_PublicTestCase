#include "xiangqi.h"
#include <stdio.h>

int main() {
    sXiangqiRecord *board = NULL;

    printf("-1 -1\n");
    printf("%d ", printXiangqiRecord(board));
    printf("%d\n", printXiangqiPlay(board));

    freeXiangqiRecord(board);

    return 0;
}
