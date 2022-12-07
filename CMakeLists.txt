cmake_minimum_required(VERSION 3.23)
project(SudokuSolver C)

set(CMAKE_C_STANDARD 99)

add_executable(SudokuSolver src/sudoku.c include/sudoku.h src/puzzle.c src/square.c src/box.c)
