#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ת���ַ�
int main()
{
	printf("c:\\test\.c");//ת���ַ�\

		return 0;
}

int main()
{
	//\ddd :ddd��ʾ1-3���˽��Ƶ�����
	//\ddd :dd��ʾ2��ʮ����������
	//printf("%c\n", '\130');//X����ASCII��ֵ��88����8������130
	//printf("%c\n", '\101');//A����65����101
	//printf("%c\n", '\x30');//0����48����x30

	printf("%d\n", strlen("c:\test\328\test.c"));//14

	return 0;
}


// C++ע�ͷ�� - ��ע��һ��Ҳ����ע�Ͷ���

/* 
Cע�ͷ�� - ��֧��Ƕ��ע��
*/

int main()
{
	int input = 0;

	printf("��������\n");
	printf("ÿ��Ҫ�ô���ô?��1/0)\n");
	scanf("%d", &input);

	if (input == 1)
		printf("��offer\n");
	else
		printf("���ع�\n");

	return 0;
}

//whileѭ��
int main()
{
	int line = 0;
	while(line<=30000)
	{
		printf("�ô���:%d\n",line);
		line++;
	}
	if (line == 30001)
	{
		printf("��offer\n");
	}

	return 0;
}