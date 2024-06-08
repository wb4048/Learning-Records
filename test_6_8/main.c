#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_atoi(const char* str)
{
    assert(str);
    while(*str==' ')
    str++;

    int ret=0;
    while(*str<=57 && *str>=48)
    {
        ret=ret*10+(*str-'0');

        if(*(str+1)< 48 || *(str+1)>57)
        return ret;

        str++;
    }
        return 0;
}


int main()
{
    char arr[]="520iu4";
    int ret1= atoi(arr);
    int ret2= my_atoi(arr);

    printf("%d my:%d ",ret1, ret2);

    return 0;
}