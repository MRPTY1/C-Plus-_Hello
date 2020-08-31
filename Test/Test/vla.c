#include<stdio.h>
#include<stdlib.h>
int main104() {
	//变长数组，创建数组时可以用变量创建，但是创建后无法修改大小
	int row = 3;
	int cols = 2;
	int(*array)[2];
	//使用malloc创建3*2*int类型大小字节的内存空间，并且赋值给指针
	array =malloc(row*cols*sizeof(int));
	//判断是否创建成功，失败则退出程序
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