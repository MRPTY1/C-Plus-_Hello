#include<stdio.h>
#include<stdlib.h>
int main104() {
	//�䳤���飬��������ʱ�����ñ������������Ǵ������޷��޸Ĵ�С
	int row = 3;
	int cols = 2;
	int(*array)[2];
	//ʹ��malloc����3*2*int���ʹ�С�ֽڵ��ڴ�ռ䣬���Ҹ�ֵ��ָ��
	array =malloc(row*cols*sizeof(int));
	//�ж��Ƿ񴴽��ɹ���ʧ�����˳�����
	if (!array)
	{
		exit(1);
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			*(*(array + i) + j) = i * j + (i + j);
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d\t", *(*(array + i) + j));
		}
		printf("\n");
	}
	return 0;
}