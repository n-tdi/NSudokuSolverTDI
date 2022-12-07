#ifndef SUDOKU_H
#define SUDOUK_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

typedef struct Box {
    struct Square ** squares;
    int numbers;
    int possible[9];
    int solvable;
    struct Box * next;
} Box;

typedef struct Square {
    int number;
    int possible[9];
    int solvable;
    Box * box;
    int row;
    int column;
} Square;

int ** createPuzzle();
void printPuzzle(Square *** puzzle);
Square *** setUpPuzzle(int ** puzzle);
int updateSudoku(Square *** sudoku, int row, int column);
int checkPuzzle(Square *** sudoku);

//Square functions
int solveSquare(Square * square);

//Box Functions
Box ** createBoxes();
int updateBoxes(Square *** sudoku, int row, int column);
#endif