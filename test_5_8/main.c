#include <stdio.h>

/*int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    for(int i=0;i<10;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}*/

/*void bubble_sort(int*p,int sz)
{
    int i,j=0;
    for(i=0;i<sz-1;i++)
    {
        int flag=i;
        for(j=0;j<sz-1-i;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                flag=0;
                int tem=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=tem;
            }
        }
        if(flag==1)
        break;
    }
}

int main()
{
    int arr[]={1,8,9,4,5,7,6,2,3};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for(int i=0;i<sz;i++)
    printf("%d ",arr[i]);
    return 0;
}*/

#include <string.h>
/*int main()
{
    char arr1[]="ABCD";
    char arr2[]="BCDA";
    int i,n,sz,flag=0;
    n=sz=strlen(arr2);
    while(n--)
    {
        char tem=arr1[0];
        for(i=0;i<sz-1;i++)
        {
            arr1[i]=arr1[i+1];
        }
        arr1[sz-1]=tem;
        if(strncmp(arr1,arr2,sz*sizeof(char))==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)printf("OK\n");
    else printf("NO\n");
    return 0;
}*/  
/*#define ROW 4
#define COL 4

int  fine(int board[ROW][COL],int n)
{
    if(n<board[0][0]||n>board[ROW-1][COL-1])
    return 0;
    int i,j=0;
    for(;1;)
    {
        if(n==board[i][j])
            return 1;
        else
            if(n>board[i][j])
                i++;
            else
                j--;

    }
    return 0;
}

int main()
{
    int board[ROW][COL]={0};
    int n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            board[i][j]=i+j;
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }

    int re= (fine(board,n));
    re==1? printf("OK\n"):printf("ON\n");
    return 0;
}*/

/*int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (3 == (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
		{
			printf("killer = %c", killer);
		}
	}

	return 0;
}*/

int main()
{
    int arr[9][9]={0};
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            arr[i][j]=1;
        }
    }

    for(int i=2;i<9;i++)
    {
        for(int j=1;j<i;j++)
        {
            arr[i][j]= arr[i-1][j]+ arr[i-1][j-1];
        }
    }

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}