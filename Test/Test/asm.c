#include<stdio.h>
int main() {
	int a, b, c;
	//����������
	//ֻ����x86ƽ̨ʹ��
	__asm {
		mov a, 1//��1��ֵ�ƶ���a��ַ
		mov b, 2
		mov eax, a//��a����ֵ��ŵ��Ĵ���
		add eax, b//��ֵ���
		mov c, eax//�Ĵ������ֵ�ƶ���c
	}
	printf("%d", c);
}