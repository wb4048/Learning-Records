#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void hello()
{
	char arr1[] = "Hello���ֵܣ���ѧ����!!!";
	char arr2[] = "########################";

	int left = 0;
	int reght = strlen(arr2) - 1; //slzeof(arr2) / slzeof(arr2[0]) - 2;
	for (; left <= reght;)
	{
		arr2[left] = arr1[left];
		arr2[reght] = arr1[reght];

		printf("%s\n", arr2);
		left++;
		reght--;
		Sleep(700);
		system("cls");
	}
	printf("%s\n", arr2);

}

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
	int ret = rand() % 100 + 1;
	printf("%d(��������QWQ)\n", ret);
	while (1)
	{
		printf("�²¿�����(0-100):>");
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

void pig()
{
	char password[20] = { 0 };
	Sleep(2000);
	printf("������ ������ ����˼����30S�ڹػ�\n");
	for (;1;)
	{
		scanf("%s", password);
		system("shutdown -s -t 30");
		if (strcmp(password, "������") == 0)
		{
			system("shutdown -a");
			printf("ȡ���ػ�(���)\n");
			break;
		}
		else
		{
			printf("miss(�����)\n");
		}
	}
	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	hello();
	printf("���ֿ��²�\n");
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
			goto again;
		case 0:
			printf("�˳�����Ц��\n");
		again:
			Sleep(2000);
			printf("���ͣ�ʹ��");
			pig();
			break;
		default:
			printf("miss(Ҫ�����)\n");
			break;

		}

	} while (input);

	printf("��Ը����ѧ��һ���ͻᣬ��ĩ�ƿ�90++");

	return 0;
}