#include <stdio.h>

/*int test(int arr[],int sz)
{
    int sum =0;
    int i=0;
    for(i=0;i<sz;i++)
    {
        sum^=arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5,4,3,2,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int re =test(arr,sz);
    printf("%d",re);
    return 0;
}*/

/*int main()
{
    int a=9;
    int b=8;
      b=a^b;
      a=b^a;
      b=a^b;
    printf("%d %d",a,b);
}*/

/*int test(unsigned int re)
{
    int count =0;
    while(re)
    {
        if(re%2==1)
            count++;
            
        re=re>>1;
    }
    return count;
}

int main()
{
    int sum =0;
    scanf("%d",&sum);
    int re =test(sum);
    printf("%d",re);
    return 0;
}*/

/*void ji(int n)
{
    int i=0;
    for(i=0;i<32;i+=2)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}

void ou(int n)
{
    int i=0;
    for(i=1;i<32;i+=2)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}

int main()
{
    int input =0;
    while(scanf("%d",&input)!=EOF)
    {
      printf("ji\n");
      ji(input);
      printf("ou\n");
      ou(input);  
    }
    return 0;
}*/

int test(int a,int b)
{
    int count=0;
    int i=0;
    for(i=0;i<32;i++)
    {
        if((a%2)^(b%2)==1)
        count++;

        a=a>>1;
        b=b>>1;
    }
    return count;
}

int main()
{
    int a,b=0;
    scanf("%d %d",&a,&b);
    int re =test(a,b);
    printf("%d",re);

    return 0;
}