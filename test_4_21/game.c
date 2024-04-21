#include "game.h"

void InitBoard(char board[ROWS][LOWS], int rows, int lows, char set)
{
    int i,j=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<lows;j++)
        {
            board[i][j] =set;
        }
    }
}

void PrintBoard(char board[ROWS][LOWS], int rows, int lows)
{
     int i,j=0;
     printf("---MINE---\n");
     for(i=0;i<lows-1;i++)
     printf("%d",i);
     printf("\n");
    for(i=1;i<rows-1;i++)
    {
        printf("%d",i);
        for(j=1;j<lows-1;j++)
        {
           printf("%c",board[i][j]);
        }
        printf("\n");
    }
}

void GitMine(char mine[ROWS][LOWS],int rows,int lows)
{
 int count =EASY;
 while(count)
 {
    int x =rand()%9+1;
    int y =rand()%9+1;
    //printf("%d %d ",x,y);
    if(mine[x][y]!='1')
    {
        mine[x][y]='1';
        count--;
    }
 }
}

int WinSet(char win[ROWS][LOWS],int rows,int lows)
{
    int i,j=0;
    int sum =0;
    for(i=1;i<LOWS-1;i++)
    {
         for(j=1;j<ROWS-1;j++)
         {
          sum+=win[i][j]-'0';
         }
    }
    if(sum ==(ROW*LOW-EASY)*2)
      return 1;
    else 
      return 0;
}

void FineMine(char mine[ROWS][LOWS],char win[ROWS][LOWS], char show[ROWS][LOWS],int rows,int lows)
{
    int count =0;
    int a,b,k=0;
    printf("input:->");
    while( scanf("%d %d",&a,&b)!=EOF)
    {
        if(mine[a][b]=='1')
        {
            printf("out\n");
            PrintBoard(mine,ROWS,LOWS);
            break;
        }
        else if(a>rows||a<1||b>lows||b<1)
        {
            printf("miss\n");
        }
        else
        {
            win[a][b]='2';
            int tem =0;
            int i,j =0;
            for(i=a-1;i<=a+1;i++)
            {
                for(j=b-1;j<=b+1;j++)
                {
                   tem += mine[i][j];
                }
            }
              count = (tem-9*'0');
              show[a][b]=count+'0';
              PrintBoard(show,ROWS,LOWS);
              printf("input:->");
           int ren= WinSet(win,ROWS,LOWS);
           if(ren==1)
           {
            printf("win!!!\n");
            printf("again!\n");
            break;
           }
        }

    }
}

