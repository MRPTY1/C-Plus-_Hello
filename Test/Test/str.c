#include<stdio.h>
#include<string.h>
int main41() {
	//设置字符串 0==\0 空字符
	//一串字符串是以空字符串结束的
	char name[20] = {0};
	//键盘赋值到name字符串，由于直接使用字符串头的地址
	scanf_s("%s",name,sizeof(name));
	printf("name is %s\n",name);
	//strlen 返回字符串大小,单不包括空字符串后的废数据
	printf("name length is %d\n", strlen(name));
	//sizeof 返回该类型大小,包括字符串大小
	printf("name char sizeof is %d", sizeof(name));
	return 0;
}