#include <stdio.h>
#include <string.h>

/*void test(char*p)
{
    char* left=p;
    char* right = p + strlen(p) - 1;
    while(left<right)
    {
        char tem=*left;
        *left=*right;
        *right=tem;
        left++;
        right--;
    }

}

int main()
{
    char arr[1000]={0};
    gets(arr);
    test(arr);

    printf("%s",arr);
    return 0;
}*/

/*void test(char* p,int k)
{
    int i,j=0;
    char*left=p;
    char*right=p+(strlen(p)-1);
    for(i=0;i<k;i++)
    {
        char tem=*p;
        for(j=0;(left+j)<right;j++)
        {
            *(left+j)=*(left+j+1);
        }
        *(right)=tem;
    }
    printf("%s",p);
    
}

int main()
{
    char arr[100]={0};
    printf("char\n");
    gets (arr);

    int k=2;
    printf("k\n");
    scanf("%d",&k);

    test(arr,k);

    return 0;
}*/

#include <assert.h>
/*size_t my_strlen(const char* p)
{
    size_t count=0;
    assert(p!=NULL);
    while(*p)
    {
        if(*p!='\0')
        {
            count++;
        }
        p++;
    }
    return count;
}

int main()
{
    char arr[100]={0};
    gets(arr);

    size_t len =my_strlen(arr);
    printf("%d",len);

    return 0;
}*/

int swap(int* p,int n)
{

	int *left = p;
	int *right = p+n-1;
	while (left < right)//持续循环查找下一组数
	{
		while ((left<right) && (*left) % 2 != 0)//从左边开始找一个偶数
		{
			left++;
		}
		while ((left<right) && (*right) % 2 == 0)//从右边开始找一个奇数
		{
			right--;
		}
		if (left < right)//基于上面两个循环找出来的两个数，若left<right，则交换两个数
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
    }
	int i=0;
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));

    return 0;
}

int main()
{
    int arr[100]={0};
    int i,n=0;
    printf("输入数的个数\n");
    scanf("%d",&n);
    printf("输入");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    swap(arr,n);

    return 0;
}
