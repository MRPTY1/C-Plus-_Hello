#include<stdio.h>
int main() {
	char str[100];
	//gets_s获取一整行的字符串遇到换行符结束
	gets_s(str,100);
	puts(str);
}