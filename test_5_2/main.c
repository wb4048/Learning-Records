#include <stdio.h>
#include <math.h>

/*int fb(int n)
{
    if(n==2||n==1)
    return 1;
    else if (n==0)
    return 0;
    else
   return fb(n-1)+fb(n-2);
   
}*/

/*int fb(int n)
{
    int a=1;
    int b=1;
    int c=0;
    if(n==1&&n==2)
    return 1;
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

int main()
{
    int input =0;
    scanf("%d",&input);
    int tem =fb(input);
    printf("%d",tem);

    return 0;
}*/

/*int test(int n)
{
    if(n<2)
    return 1;
    else
    return test(n-1)*n;

}*/

/*int test(int n)
{
    int sum =0;
    if(n!=0)
    {
      int a =n%10;
      int b =n/10;
      sum =a+ test(b);
    }
    return sum;
}*/

/*int test(int n)
{
    int sum =1;
    while(n)
    {
        sum=sum*n;
        n--;
    }
    return sum;
}*/

/*int main()
{
    int input =0;
    scanf("%d",&input);
    int sum =test(input);
    printf("%d",sum);

    return 0;
}*/

/*int test(int n,int k)
{
    if(k==0)
    return 1;
    if(k!=0)
    {
       return n*test(n,k-1);
    }
    
}

int main()
{
    int n,k=0;
    scanf("%d %d",&n,&k);
    int sum =test(n,k);
    printf("%d",sum);
    return 0;
} */

void test(int n)
{
    if(n>0)
    printf("%d\n",n%10);
    test(n/10);
}

int main()
{
    int input =0;
    scanf("%d",&input);
    test(input);
    return 0;
}