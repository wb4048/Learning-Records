#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ�������C���Դ����µ����ͳ���

//����ѧ��
struct Stu
{
	char name[20];
		int age;
	double score;
};

struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "����",20,85.5 };//�ṹ�Ĵ����ͳ�ʼ��
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", (ps)->name, (ps)->age, (ps)->score);
	
	return 0;
}