#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("������Ϸ\n����1-7���ɵõ����ʵ�����\n");

	int day = 0;
	scanf("%d", &day);

	if (1 == day)
		printf("������\n");
	else if (2 == day)
		printf("������\n");
	else if (3 == day)
		printf("������\n");
	else if (4 == day)
		printf("ˮ����\n");
	else if (5 == day)
		printf("ľ����\n");
	else if (6 == day)
		printf("������\n");
	else if (7 == day)
		printf("������\n");
	else
		printf("miss");

	switch (day)//���������α��ʽ
	{
	case 1://���γ������ʽ
		printf("������\n");
		break;
	case 2:
		printf("������\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("ˮ����\n");
		break;
	case 5:
		printf("ľ����\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	deflault:
		printf("����\n");
		break;
	}

	return 0;
}


int main()
{
	//��whileѭ���� break �������õ���ֹѭ��
	//��whileѭ���� continue ��������������continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ������һѭ��
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			//break;
		continue;
		printf("%d\n", i);
		i++;
	}
	return 0;

}

int main()
{
	printf("CTRL+Zȡ������\n");
	//EOF=end of file �ļ�������־
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}