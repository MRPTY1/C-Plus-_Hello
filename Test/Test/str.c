#include<stdio.h>
#include<string.h>
int main41() {
	//�����ַ��� 0==\0 ���ַ�
	//һ���ַ������Կ��ַ���������
	char name[20] = {0};
	//���̸�ֵ��name�ַ���������ֱ��ʹ���ַ���ͷ�ĵ�ַ
	scanf_s("%s",name,sizeof(name));
	printf("name is %s\n",name);
	//strlen �����ַ�����С,�����������ַ�����ķ�����
	printf("name length is %d\n", strlen(name));
	//sizeof ���ظ����ʹ�С,�����ַ�����С
	printf("name char sizeof is %d", sizeof(name));
	return 0;
}