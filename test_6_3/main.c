#include <stdio.h>
#include <assert.h>

 const char* my_strstr(const char*dest,const  char*src)
 {
    assert(dest&&src);
    const char*s1=NULL;
    const char*s2=NULL;
    const char*cup=dest;

    if(*src=='\0')
    return dest;
    while(*cup)
    {
        s1=cup;
        s2=src;
        while(*s1&&*s2 && *s1==*s2)
        {
            s1++;
            s2++;
        }
        if(*s2=='\0')
        return cup;
        cup++;
    }
    return NULL;
 }

void my_strncpy(const char*dest, const char*src, size_t n)
{
    
}

int main()
{
    char arr1[]="zxcvbnm";
    char arr2[]="asdfghjklzxc";
    int sz = sizeof(arr2)/sizeof(arr2[0]);

   /* const char* ret= my_strstr(arr1,arr2);
    if(ret==NULL)
        printf("存在\n");
    else
        printf("%s\n",ret);
*/

    my_strcpy(arr1,arr2,sz);
    return 0;
}