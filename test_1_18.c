#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int X, int Y)
{
	int asd = X + Y;

	return asd;
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	int sum = add(num1, num2);

	printf("%d", sum);

	return 0;
}

int main()
{
	//����-һ����ͬ���͵�Ԫ�ؼ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i = i++;
	}

	return 0;
}

int main()
{
	int a = 9 / 2;
	float b = 9 / 2;
	float c = 9 / 2.0;
	int d = 9 % 2;//%-ȡģ��ȡ�ࣩ

	printf("%d\n", a);//4
	printf("%f\n", b);//4.000000
	printf("%f\n", c);//4.500000
	printf("%d\n", d);//1

	return 0;
}

int main()
{
	int a = 2;
	int b = a << 1;//���ƶ�������-�ƶ����Ƕ�����λ
	//00000000000000000000000000000010    int-4�ֽڣ�1�ֽ�8bitλ
	//�����ƶ�һλ
	//00000000000000000000000000000100    ���һλ��0
	printf("%d", b);//4

	return 0;
}

//λ��������
// &��λ��
// |��λ��
// ^��λ���

//��ֵ������
int main()
{
	a = a + 5;
	a += 5;

	a = a - 5;
	a -= 5;

	a = a % 5;
	a %= 5;

	return 0;
}

//��Ŀ��������ֻ��һ��������
// ���߼�������

int main()
{
	//0��ʾ�٣���0��ʾ��
	int a = 10;
	int b = 0;

	printf("%d\n", !a);//��ٻ���
	printf("%d\n", !b);//�ٱ���Ĭ��Ϊ1

	if (a)
	{
		//aΪ�������
	}
	if (!a)
	{
		//aΪ�پͲ�����
	}
}

int main()
{
	int a = 10;
	//sizeof��һ��������
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));//���������ſ�ʡ��
	
	return 0;
}

int main()
{
	
	int arr[10] = { 0 };
	printf("%d\n", sizeof arr);//10 * 4 = 40
	printf("%d\n", sizeof arr[0]);
	printf("%d\n",sizeof arr / sizeof arr[0]);//������

	return 0;
}