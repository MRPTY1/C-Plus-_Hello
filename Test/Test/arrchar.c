#include<stdio.h>
int main1102() {
	char* p = "Hello World";
	printf("%d\n", sizeof p);
	printf("%s\t%s\n", p,*&p);
	char ch []= "Hello World";
	//ch = p;
	//�������ǳ�������ֵʱ��߱����Ǳ������ܸ�ֵ
}