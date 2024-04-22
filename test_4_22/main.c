#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main()
{
    int a =20;
    int b =0;
    while(1)
    {
      b +=a;
      a = a/2;
      if(a==0)
      break;
    }
    printf("%d",b);
    return 0;
}*/

/*int qwe(int x)
{
    if (x > 0)
        return x;
    if (x < 0)
        return (-1) * x;
}*/

/*int main()
{
    int n = 13;
    int x = n / 2;
    int y = n / 2;
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
       for (j = 0; j < n; j++)
        {
          if (abs((i - x)) + abs((j - y)) <= n / 2)
            {
             printf("*");
            }
          else
           {
             printf(" ");
           }
        }
       printf("\n");
    }
 
    return 0;
}*/

/*int  gsu(int num)
{
    int count=0;
    while(num)
    {
        num/=10;
        count++;
    }
    return count; 
}

int main()
{
  
    int i,j=0;
    for(i=1;i<100001;i++)
    {
        int sum=0;
        int a=i;
        int n = gsu(i);
        for(j=0;j<n;j++)
        {
            sum+=pow(a%10,n);
            a/=10;
        }
        if(sum==i)
        printf("%d ",i);
    }
    return 0;
}*/


int main()
{
    int a = 2;
    int b = a;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		a = a * 10+b;
		sum += a;
	}
	printf("%d\n", sum);
	return 0;
}