#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp_int(const void* p1,const void* p2)
{
    return *(int*)p1-*(int*)p2;
}

struct Stu
{
    char name[20];
    int age;
};

int cmp_stu(const void* p1,const void* p2)
{
    return ((struct Stu*)p1)->age-((struct Stu*)p2)->age;
}

/*int main()
{
    //int arr1[]={1,2,5,4,7,6,9,8,10};
    //qsort(arr1,sizeof(arr1)/sizeof(arr1[0]),sizeof(arr1[0]),cmp_int);
    //for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
    // printf("%d",arr1[i]);
    struct Stu arr[]={{"zhangsan",20},{"xiaoli",28},{"wangming",25}};
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_stu);
    return 0;
}*/

void print(int arr[],size_t sz)
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
} 

 void Swap(char*buf1,char*buf2,int byte)
 {
    char tem=0;
    for(int i=0;i<byte;i++)
    {
        tem=*buf1;
        *buf1=*buf2;
        *buf2=tem;

        buf1++;
        buf2++;

    }
 }


 void my_bubble_sort(void* arr, size_t sz, size_t byte, int (*cmp)(const void*p1,const void*p2))
 {
    int i,j=0;
    for(i=0;i<sz-1;i++)
    {
        int flag=1;
        for(j=0;j<sz-1-i;j++)
        {
            if(cmp_int((char*)arr+j*byte,(char*)arr+(j+1)*byte)<0)
            {
                flag=0;
                Swap((char*)arr+j*byte,(char*)arr+(j+1)*byte,byte);
            }
        }
        if(flag==1)
        break;
    }
 }

int main()
{
    int arr[]={1,2,5,4,6,8,9,14,52,12};
    int sz=sizeof(arr)/sizeof(arr[0]);
    my_bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
    print(arr,sz);
    return 0;
}