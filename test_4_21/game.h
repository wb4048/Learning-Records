#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define LOW 9
#define EASY 20

#define ROWS ROW+2
#define LOWS LOW+2

void InitBoard(char board[ROWS][LOWS], int rows, int lows, char set);
void PrintBoard(char board[ROWS][LOWS], int rows, int lows);
void GitMine(char mine[ROWS][LOWS],int rows,int lows);
void FineMine(char mine[ROWS][LOWS],char win[ROWS][LOWS], char show[ROWS][LOWS],int rows,int lows);
