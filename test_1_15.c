#include <stdio.h>

int main()
{
	printf("halo\n");

	return 0;
}

//����
//1���泣��

int main()
{
	3.14;
	10;
	'a';
	"asdf";
 
	return 0;
}

//2.const���εĳ���
//const int num = 10;//num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�

int main()
{
	const int num = 10;
	//num = 20��
	printf("%d\n", num);//10

	int arr[10] = {0};//10��Ԫ��

	const int n = 0;//n�ı�����Ȼ�Ǳ���
	int arr2[n] = { 0 };//n�Ǳ����������ǲ��е�

	return 0;
}

//3. #define ����ı�ʶ������

#define MAX 8848

int main()
{
	int n = MAX;
	//MAX = 44;// #define ����ı�ʶ������ ���ɸ�
	printf("%d\n", n);

	return 0;
}

//4.ö�ٳ���
//����һһ�оٵĳ���

enum Sex
{
	//����ö�ٱ������͵ı�����δ������ȡֵ
	//ö�ٳ���
	MALE = 3,//����ֵ
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = MALE;

	printf("%d\n",MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}


//�ַ�������һ���ַ� - ��˫������������һ���ַ�

int main()
{
	"asdf"
	"hole heli"
	
	return 0;

}

#include <string.h>

//�ַ����� - ������һ��ͬ���͵�Ԫ��
//�ַ����ڽ�β��λ��������һ��\0���ַ�
//\0���ַ����Ľ�����־
int main()
{
	char arr[] = "hello";//���ӽ��Ϊ��Ԫ�ص���Ԫ��Ϊ\0
	char arr1[] = "abc";//4
	char arr2[] = { 'a','b','c' ,'\0'};//4

	//���ַ����ĳ���
	int len = strlen("abc");//sting length
	printf("%d\n", len);//3

	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//3,��û�н�����־\0����Ϊ���ֵ

	//��ӡ�ַ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);//��û�н�����־\0�����������ַ�
	
	return 0;
}