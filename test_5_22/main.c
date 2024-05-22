#include <stdio.h>

/*int Add(int a,int b)
{
    return a+b;
}

int Sub(int a,int b)
{
    return a-b;
}

int Mul(int a,int b)
{
    return a*b;
}

int Div(int a,int b)
{
    return a/b;
}

void menu()
{
    printf("***************************\n");
    printf("***1.加法器****3.乘法器******\n");
    printf("***2.减法器****4.除法器*****\n");
    printf("***0.退出*******************\n");
    printf("***************************\n");
}
int main()
{
    int (*pf[5])(int,int)={0,Add,Sub,Mul,Div};
    int input=0;
    int x,y=0;
    
    do
    {
        menu();
        printf("输入");
        scanf("%d",&input);
        if(input>=1&&input<=4)
        {
            printf("输入数");
            scanf("%d %d",&x,&y);
            printf("%d\n",pf[input](x,y));
        }
    } while (input);
    return 0;
}*/

/*void fine(int arr[], int n)
{
    int i, j,flag= 0;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j =0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag++;
            }
            else if(flag == 2)
                break;
        }
        if (flag == 1)
            printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,1,2,3,4,6};
    int sz=sizeof(arr)/sizeof(arr[0]);
    fine(arr,sz);
    return 0;
}*/

int test(int a,int b)
{
    int mon[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(a%4==0||a%400==0&&a%100!=0)
    mon[2]=29;
    
    return mon[b];
}

int main()
{
    int a,b=0;
    printf("输入->");
    scanf("%d %d",&a,&b);
    int sum=test(a,b);
    printf("%d",sum);
    return 0;
}