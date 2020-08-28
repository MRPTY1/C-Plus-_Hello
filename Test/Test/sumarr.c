#include<stdio.h>
int sum(int* arr, int* end);
//数组和指针的关系
int main101() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//数组名为数组第一个元素的指针
	int* sump = arr;
	//sizeof 计算的是数组占多少字节
	printf("arr sizeof is %zd\n", sizeof arr);
	//sump+9 指针指向的是数组最后一位的下一位
	printf("%d\n", sum(sump, sump + 9));
	return 0;
}

int sum(int* arr, int* end) {
	int sum = 0;
	while(arr < end){
		sum += *arr;
		printf("arr i is %p\n", arr);
		//int指针 每加1都会增加4个字节 指向下一位元素
		arr++;
	}
	printf("%d\n", *(arr-1));
	return sum;
}