#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("����\n");

	return 0;
}


//char         //�ַ���������
//short        //������
//int          //����
//long         //������
//long long    //��������
//float        //�����ȸ�����
//double       //˫���ȸ�����



int main()
{
	printf("hehe\n");
	printf("bite\n");
	printf("%d\n", 100);
	printf("%d\n", sizeof(char));//sizeof-�������ͻ��߱�����ռ�ռ��С
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}


//%d-����
//%f-�����ȸ�����
//%lf-˫���ȸ�����

int main()
{
	int age = 20;
	double weight = 57.3;

	age = age + 1;
	weight = weight - 20;
	printf("%d\n", age);
	printf("%lf\n",weight);

	return 0;

}

//ȫ�ֱ���-{}�ⲿ�����
int a = 100;

int main()
{
	//�ֲ�����-{}�ڲ������
	//ȫ�ֱ����;ֲ��������ֳ�ͻʱ���ֲ�����
	//�������ȫ�ֱ����;ֲ�����������д��һ����
	int a = 10;

	printf("%d\n", a);

	return 0;
}


//дһ��������2�������ĺ�
//scanf���������뺯��

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;

}