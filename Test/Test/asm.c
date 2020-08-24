#include<stdio.h>
int main() {
	int a, b, c;
	//内联汇编代码
	//只能在x86平台使用
	__asm {
		mov a, 1//将1数值移动到a地址
		mov b, 2
		mov eax, a//将a的数值存放到寄存器
		add eax, b//数值相加
		mov c, eax//寄存器结果值移动到c
	}
	printf("%d", c);
}