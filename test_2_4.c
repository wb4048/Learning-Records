#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "#################";

	int left = 0;
	int reght = strlen(arr2) - 1; //slzeof(arr2) / slzeof(arr2[0]) - 2;
	for (; left <= reght;)
	{
		arr2[left] = arr1[left];
		arr2[reght] = arr1[reght];

		printf("%s\n", arr2);
		left++;
		reght--;
		Sleep(1000);
		system("cls");//�⺯��ִ��ϵͳ����"����"
	}
	printf("%s\n", arr2);

	return 0;
}

#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password, "abcd") == 0)//�Ƚ����ַ����Ƿ����,����ֵΪ0��ʾ�ַ������
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("miss\n");

	}
	if (i >= 3)
		printf("������࣬�˳�����\n");
	


	return 0;
}