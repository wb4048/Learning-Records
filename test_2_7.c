#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("###########################\n");
	printf("########  1.play   ########\n");
	printf("########  0.exit   ########\n");
	printf("###########################\n");
}

void game()
{
	int guess = 0;
	//1.���������
	//0-99 --> 1-100
	int ret = rand()%100+1;//����������ĺ�������Χ 0-RAND_MAX��32767��(16����)
	printf("%d\n", ret);
	//2.������
	while(1)
	{
		printf("�²¿�����:>");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("�¶��ˣ�GOOD!!!\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������㣬ʱ���
	do
	{
		menu();
		printf("��ѡ��");  
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				printf("��ʼ����\n");
		        game();
			   break;
		case 0:
		        printf("�˳�\n");
			   break;
		default:
				printf("miss\n");
		       break;

		}

	} while (input);
	return 0;
}