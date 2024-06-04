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

char* my_strncpy(char*dest, const char*src, size_t n)
{
    assert(dest&&src);
    char*ret=dest;
    while(*src&& n)
    {
       *dest=*src;

        dest++;
        src++;
        n--;
    }
    *dest='\0';
    return ret;
}

char* my_strncat(char*dest, const char*src,size_t n)
{
    assert(dest&&src);
    char*ret=dest;
    while(*dest)
        dest++;
    while(*src&&n)
    {
        *dest=*src;

        dest++;
        src++;
        n--;
    }
    *dest='\0';

    return ret;
}

void* my_memcpy(void*dest, void*src, size_t n)
{
    assert(dest&&src);
    void*ret= dest;
    for(int i=0;i<n;i++)
    {
        *(char*)dest=*(char*)src;
        dest=(char*)dest+1;
        src=(char*)src+1;

    }
    return ret;
}

void* my_memmove(void*dest,const void*src,size_t n)
{
    assert(dest&&src);
    void*ret=dest;
    if(dest<src)
    {
        while(n--)
        {
            *(char*)dest=*(char*)src;
            dest=(char*)dest+1;
            src=(char*)src+1;
        }
    }
    else
    while(n--)
    {
        *((char*)dest+n)=*((char*)src+n);
    }
    return ret;
}

int main()
{
    char arr1[100]="zxcvbnm";
    char arr2[]="asdfghjklzxc";
    int sz = sizeof(arr2)/sizeof(arr2[0])-1;

   /* const char* ret= my_strstr(arr1,arr2);
    if(ret==NULL)
        printf("存在\n");
    else
        printf("%s\n",ret);
*/

    /*my_strncpy(arr1,arr2,sz);
    printf("%s\n",arr1);
*/   

    /*my_strncat(arr1,arr2,sz);
    printf("%s\n",arr1);
*/
    int arr3[]={1,2,3,4,5,6};
    int arr4[]={7,8,9,10};

    //my_memcpy(arr3,arr4,sizeof(arr4));
    my_memmove(arr3+2,arr3,16);
    for(int i=0;i<sizeof(arr3)/sizeof(arr3[0]);i++)
    printf("%d ",arr3[i]);

     return 0;
}