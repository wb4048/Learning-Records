#include <stdio.h>

void lily()
{
    for(int i=10000;i<100000;i++)
    {
        if(i == (i/10000)*(i%10000)+(i/1000)*(i%1000)+(i/100)*(i%100)+(i/10)*(i%10))
        {
            printf("%d ",i);
        }
    }
}

void test()
{
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        arr[i]^=x;
        if(arr[i]!=0)
        printf("%d ",arr[i]^x);
    }
}

int main()
{
    //lily();
    test();
    return 0;
}