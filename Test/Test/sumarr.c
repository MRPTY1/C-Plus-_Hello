#include<stdio.h>
int sum(int* arr, int* end);
//�����ָ��Ĺ�ϵ
int main101() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//������Ϊ�����һ��Ԫ�ص�ָ��
	int* sump = arr;
	//sizeof �����������ռ�����ֽ�
	printf("arr sizeof is %zd\n", sizeof arr);
	//sump+9 ָ��ָ������������һλ����һλ
	printf("%d\n", sum(sump, sump + 9));
	return 0;
}

int sum(int* arr, int* end) {
	int sum = 0;
	while(arr < end){
		sum += *arr;
		printf("arr i is %p\n", arr);
		//intָ�� ÿ��1��������4���ֽ� ָ����һλԪ��
		arr++;
	}
	printf("%d\n", *(arr-1));
	return sum;
}