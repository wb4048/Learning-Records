#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char* arr)
{
    assert(arr!=NULL);
    int count=0;
    while(*arr)
    {
        count++;
        arr++;
    }
    return count;
}

char* my_strcpy(char*dest,const char*src)
{
    assert(dest&&src);
    char*ret=dest;
    while(*src)
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest=*src;//\0;
    return ret;//起始地址
}

int my_strcmp(const char*dest,const char*src)
{
    assert(dest&&src);
    while(*src==*dest)
    {
       dest++;
       src++;
    }
    return (*dest-*src);
}

char* my_strcat(char*dest,char*src)
{
    assert(dest&&src);
    char*ret=dest;
    while(*dest)
    dest++;
    while(*dest++=*src++);
    return ret;
}

int main()
{
    char arr1[]="abcdef";
    char arr2[]="abcvbnhgf";

    //size_t ret=my_strlen(arr1);
    //printf("%d",ret);

    //my_strcpy(arr1,arr2);
    //printf("%s",arr1);

    //int ret= my_strcmp(arr1,arr2);
    //printf("%d",ret);

    my_strcat(arr1,arr2);
    printf("%s",arr1);
    return 0;
}