#include <stdio.h>
#include <stdlib.h>

int test1()
{
    FILE* pfW = fopen("test1.txt", "w");//编写文件
    if (pfW == NULL)
    {
        perror("fopen");
        return 1;
    }
    int i = 0;
    for (i = 'a'; i <= 'z'; i++)
        fputc(i, pfW);

    fclose(pfW);
    pfW = NULL;

    FILE* pfr = fopen("test1.txt", "r");//打开文件
    if (pfr == NULL)
    {
        perror("fopen");
        return 1;
    }
    FILE* pfw = fopen("test2.txt", "w");
    if (pfw == NULL)
    {
        perror("fopen");
        return 1;
    }
    int ch = 0;
    while ((ch = fgetc(pfr)) != EOF)//拷贝文件
    {
        fputc(ch, pfw);
    }
    //确认结束原因
    if (ferror(pfr))
        printf("读取有错误");
    else if (feof(pfr))
        puts("读取完毕");

    fclose(pfw);
    fclose(pfr);
    pfw = NULL;
    pfr = NULL;

    return 0;
}

struct S
{
    char name[20];
    int age;
    float score;

};

void test2()
{
    char arr[100] = { 0 };
    struct S s = { "zhangsan",20,50.6f };

    struct S tmp = { 0 };
    //将S中的数据存放到arr
    sprintf(arr, "%s %d %f", s.name, s.age, s.score);
    printf("%s\n", arr);

    //从arr中提取数据到tmp
    sscanf(arr, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
    printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);

}

int test3()
{
    struct S d = { 0 };
    struct S s = { "lisi",18,80.0f };
    FILE* pfw = fopen("test3.txt", "w");
    if (pfw == NULL)
    {
        perror("fopen");
        return 1;
    }
    fprintf(pfw, "%s %d %f", s.name, s.age, s.score);//写进文件
    fclose(pfw);
    pfw = NULL;

    FILE* pfr = fopen("test3.txt", "r");//读文件
    if (pfr == NULL)
    {
        perror("fopen");
        return 1;
    }
    fscanf(pfr, "%s %d %f", d.name, &(d.age), &(d.score));
    printf("%s %d %f\n", d.name, d.age, d.score);

    fclose(pfr);
    pfr = NULL;

    return 0;
}

int test4()
{
    struct S d = { 0 };
    struct S s = { "zhangsan",20,50.6f };
    FILE* pfw = fopen("test4.txt", "wb");//以二进制形式写
    if (pfw == NULL)
    {
        perror("fopen");
        return 1;
    }
    fwrite(&s, sizeof(struct S), 1, pfw);//写
    fclose(pfw);
    pfw = NULL;

    FILE* pfr = fopen("test4.txt", "rb");//以二进制形式读
    if (pfr == NULL)
    {
        perror("fopen");
        return 1;
    }
    fread(&d, sizeof(struct S), 1, pfr);//读
    printf("%s %d %f\n", d.name, d.age, d.score);
    fclose(pfr);
    pfr = NULL;

    return 0;
}

int test5()
{
    FILE* pfr = fopen("test2.txt", "r");//读文件
    printf("%d\n", ftell(pfr));

    fseek(pfr, 1, SEEK_SET);
    printf("%d\n", ftell(pfr));

    int ch = 0;
    ch = fgetc(pfr);
    fprintf(stdout, "%c\n", ch);

    rewind(pfr);
    printf("%d\n", ftell(pfr));

    return 0;
}



int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}