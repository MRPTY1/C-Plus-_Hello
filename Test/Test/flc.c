#include<stdio.h>
#define COLS 4
void sum1(int arr[], int len);
void sum2d(int arr[][COLS], int row);
int main() {
	int* p;
	int(*p2)[COLS];
	//复合字面量,可以提供匿名和字面量的数组
	p = (int[]){ 1,2,3,4 };
	p2 = (int[2][COLS]){ 1,2,3,4,5,6,7,8 };
	sum1(p,4);
	sum2d(p2, 2);
	sum1((int[]){ 1,2,3,5 },4);
	return 0;
}

void sum1(int arr[], int len){
	int arr_sum = 0;
	for (int i = 0; i < len; i++)
	{
		arr_sum += arr[i];
	}
	printf("sum is %d\n", arr_sum);
}

void sum2d(int arr[][COLS], int row){
	int arr_sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COLS; j++) {
			arr_sum += arr[i][j];
		}
	}
	printf("sum is %d\n", arr_sum);
}
