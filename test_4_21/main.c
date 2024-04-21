#include "game.h"

void menu()
{   
    printf("********************\n");
    printf("****** 1.piay ******\n");
    printf("****** 0.exit ******\n");
    printf("********************\n");
}

void game()
{
    char mine[ROWS][LOWS]={0};
    char show[ROWS][LOWS]={0};
    char win[ROWS][LOWS]={0};

    InitBoard(mine, ROWS, LOWS, '0');
    InitBoard(win, ROWS, LOWS, '0');
    InitBoard(show, ROWS, LOWS, '*');

    GitMine(mine,ROWS,LOWS);
    
   //PrintBoard(mine,ROWS,LOWS);
   //PrintBoard(win,ROWS,LOWS);
    PrintBoard(show,ROWS,LOWS);

    FineMine(mine,win,show,ROWS,LOWS);
    
}

void test()
{
    int input =0;
    do
    {
        menu();
        srand((unsigned int)time(NULL));
        scanf("%d",&input);
        switch(input)
        {
            case 1:
            game();
            break;
            case 0:
            printf("退出游戏\n");
            break;
            default:
            printf("输入错误\n");
            break;

        }

    } while (input);
    
}

int main()
{
    test();
    return 0;
}