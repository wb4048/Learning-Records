#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	
	printf("%d", ~a);// ~��λȡ�����������ƣ����������ڴ��д�����ǲ���
	//-1��
	//10000000000000000000000000000001��ԭ�룩���λ��ʾ����                    //���� ԭ�� ���� ���� ����
	//11111111111111111111111111111110�����룩���λ���䣻����λ��λȡ��
	//11111111111111111111111111111111�����룩���λ��1
	//

	return 0;
}

int main()
{
	int a = 10;
	int b = ++a;//ǰ��++ �ȼӺ�ʹ��
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}

int main()
{
	int a =(int) 3.14;// ��int)ǿ������ת��  ���Ƽ�

	printf("%d", a);

	return 0;
}

int main()
{
	int a = 3;
	int b = 8;

	int c = a && b;//���� a b ��Ϊ��Ϊ�����Ϊ�� ����Ϊ��
	int d = a || b;//���� ��һ��Ϊ�����

	printf("%d", c);

	return 0;
}

int main()
{
	//exp1 ? exp2 : exp3;//exp1������exp2���㣬���Ϊexp2���������exp3
	int a = 1;
	int b = 8;
	int MAX = 0;
	
	/*if (a > b)
	    MAX = a;

	else
		MAX = b;*/

	MAX = a > b ? a : b;

	printf("%d", MAX);

	return 0;
}