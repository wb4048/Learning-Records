#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int *arr = (int*)malloc(sizeof(int)*(numsSize*2));
    for(int i=0;i<numsSize;i++) arr[i]=arr[i+numsSize]= nums[i];
    *returnSize = (numsSize*2);
    return arr;
}

union un
{
    char c;
    int a;
};

void test1(void)
{
    union un asd={0};
    asd.a=1;
    if(asd.c==1)
    printf("小端");
    else
    printf("大端");
}

int test2()
{

    int*p= (int*)malloc(10 * sizeof(int));
    int* ret = p;
    if (p == NULL)
    {
        perror("malloc");
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i + 1;
        printf("%d hahah\n",i);
    }
    int*ptr=(int*)realloc(p, 20*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        *(ptr +10+i) = i + 10;
        printf("%d sdsds\n",i);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", (*(ptr + i)));
    }
    free(p);
    p = NULL;
    ret = NULL;
    ptr=NULL;
    return 0;
}

int test3()
{
    int(*p)[5]= (int(*)[5])malloc(3*5*sizeof(int));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        printf("%p ",&p[i][j]);
        printf("\n");
    }

}

int main()
{
    //test1();
    //test2();
    test3();


    return 0;
}