#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef unsigned int u_int;//�򵥻�
int main()
{
	unsigned int num = 100;
	u_int num2 = 100;

	return 0;
}

//static -��̬��
//1.static���ξֲ��������ı��˾ֲ��������������ڣ������Ǹı�洢����Ϊ��̬��
//2.static����ȫ�ֱ�����ʹ�ñ����ε�ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�(.c)��ʹ�ã��ⲿ�������Ա��ڲ���������
//3.stasic���κ�����ʹ�ñ����εĺ���ֻ�����Լ����ڵ�Դ�ļ�(.c)��ʹ�ã��ⲿ�������Ա��ڲ���������

void test()
{
	static int a = 1;//stastic���ξֲ�������

	a++;
	printf("%d", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
	test();
	i++;
}
	return 0;
}

//define ��һ��Ԥ����ָ��
//define �������

#define MAX 1000

int main()
{
	printf("%d\n", MAX);
	return 0;
}

//define �����
#define ADD(X,Y) ((X)+(Y))

int main()
{
	printf("%d\n", 4 * ADD(2, 3));

	return 0;

}

int main()
{
	int a = 10;//���ڴ�����4�ֽڣ�����10
	int* pa = &a;//paָ�����
	 *pa = 20;//�����ò�������ͨ��pa�д�ŵĵ�ַ���ҵ�pa��ָ��Ķ���,*pa����paָ��Ķ���
		printf("%d", a);

	return 0;
}

int main()
{//����ʲô���͵�ָ�룬�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
	//32λ�����ϵĵ�ַ:32bitλ - 4byte,����ָ������Ĵ�С��4���ֽ�
	//64λ�����ϵĵ�ַ:64bitλ - 8byte,����ָ������Ĵ�С��8���ֽ�
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}