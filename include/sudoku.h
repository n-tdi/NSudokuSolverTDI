#ifndef SUDOKU_H
#define SUDOUK_H

#include <stdio.h>
#include <stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

typedef struct Sudoku {
    struct Square *** squares;
    struct Box ** boxes;
} Sudoku;

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
Sudoku * setUpPuzzle(int ** puzzle);

Sudoku * createSudoku(Square *** puzzle, Box ** boxes);

int updateSudoku(Square *** sudoku, int row, int column);
int checkPuzzle(Square *** sudoku, Box ** boxes);

//Square functions
int solveSquare(Square * square);

//Box Functions
Box ** createBoxes();
int updateBoxes(Square *** sudoku, int row, int column);
#endif