#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int age = 0;

	scanf("%d", &age);

	if (18 <= age)
		printf("�����˿�������\n");
    else
		printf("�ú�ѧϰ\n");


	return 0;
}


int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("ɧ��");
	else if (age > 18 && 26 > age)
		printf("����");
	else if (age >= 26 && age < 40)
		printf("����");
	else if (age >= 40 && age < 60)
	printf("׳��");
	else if (age >= 60 && age < 100)
		printf("����");
	else
		printf("�ϲ���");


	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d", i);

	}
		return 0;
}