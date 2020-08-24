#include<stdlib.h>
//lib 标准静态库
#include<stdio.h>
int main2() {
	int value;
	//运行cmd命令 打开写字板
	//返回值为0和其他数
	value=system("write");
	printf("%d\n", value);
	return 0;
}