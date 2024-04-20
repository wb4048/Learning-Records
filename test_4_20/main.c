#include <stdio.h>

/*int bin_search(int arr[],int left,int right, int key)
{
    while(right>=left)
    {
        int zh =left + (right-left)/2;

        if(key>arr[zh]) 
            left =zh+1;
        if(key<arr[zh]) 
            right =zh-1;
        else 
            return zh;
    }    
        return -1;
}

int main()
{
    int key;
    scanf("%d",&key);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
     int sz=sizeof(arr)/sizeof(arr[0]);
     int left =0;
     int right =sz-1;
    bin_search(arr,left,right,key);
    printf("%d",key);

    return 0;
}*/

/*int main()
{
    int input =0;
    scanf("%d",&input);

    int i,j;
    for(i=1;i<=input;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}*/

/*void test(int input)
{
    if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
        printf("闰年\n");
    else
        printf("不是闰年\n");

}

int main()
{
    int input = 0;
    while(scanf("%d", &input)!=EOF)
    test(input);
    return 0;
}*/


/*void is_prime (int i)
{
    int j=0;
    for(j=2;j<=i;j++)
    {
        if(i%j==0)
        {
            break;
        }
        
    }
    if(i==j)
            printf("prime:%d ",i);
    
}

int main()
{
    int i=0;
    for(i=100;i<201;i++)
    {
        is_prime(i);
    }

    return 0;
}*/

void init(int arr[], int sz)
{
    int i =0;
    for(i=0;i<sz;i++)
    {
        arr[i]=0;
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void print(int arr[], int sz)
{
    int i =0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
     printf("\n");
}

void reverse(int arr[], int sz)
{
    int p = 0;
    int q = sz - 1 - p;
    while (p < q)
    {
        int tem = arr[p];
        arr[p++] = arr[q];
            arr[q--] = tem;
    }
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
     printf("\n");
}

int main()
{
    int arr[]={1,2,3,4,55,66,44,45,66,77,89,10};
    int sz =sizeof(arr)/sizeof(arr[0]);

    print(arr, sz);
    reverse(arr, sz);
    init(arr, sz);

    return 0;
}