#include "xiangqi.h"
#include <stdio.h>

int main() {
    
    sXiangqiRecord * board = initXiangqiRecord();
    moveXiangqiRecord(board, 3, 6, 4, 6);
    moveXiangqiRecord(board, 9, 6, 7, 4);
    moveXiangqiRecord(board, 2, 1, 2, 2);
    moveXiangqiRecord(board, 7, 7, 3, 7);
    moveXiangqiRecord(board, 0, 7, 2, 6);
    moveXiangqiRecord(board, 3, 7, 3, 2);
    moveXiangqiRecord(board, 0, 1, 2, 0);
    moveXiangqiRecord(board, 3, 2, 5, 2);
    moveXiangqiRecord(board, 2, 2, 6, 2);
    moveXiangqiRecord(board, 9, 7, 8, 5);
    moveXiangqiRecord(board, 0, 0, 0, 1);
    moveXiangqiRecord(board, 9, 0, 7, 0);
    moveXiangqiRecord(board, 2, 6, 4, 5);
    moveXiangqiRecord(board, 9, 8, 9, 7);
    moveXiangqiRecord(board, 0, 8, 0, 7);
    moveXiangqiRecord(board, 9, 7, 4, 7);
    moveXiangqiRecord(board, 0, 6, 2, 4);
    moveXiangqiRecord(board, 9, 1, 7, 2);
    moveXiangqiRecord(board, 2, 0, 3, 2);
    moveXiangqiRecord(board, 6, 4, 5, 4);
    moveXiangqiRecord(board, 3, 2, 5, 3);
    moveXiangqiRecord(board, 7, 2, 6, 4);
    moveXiangqiRecord(board, 0, 1, 5, 1);

    printXiangqiPlay(board);
    freeXiangqiRecord(board);
}