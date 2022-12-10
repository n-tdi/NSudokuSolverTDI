#include "../include/sudoku.h"

int UNSOLVED = 81;
int SIZE_ROWS = 9;
int SIZE_COLUMNS = 9;

int main() {
    int ** puzzle;
    Sudoku * sudoku;

    puzzle = createPuzzle();

    sudoku = setUpPuzzle(puzzle);

    printPuzzle(sudoku->squares);

    checkPuzzle(sudoku->squares, sudoku->boxes);

    printf("\nSolved\n");

    printPuzzle(sudoku->squares);

    return 0;
}
