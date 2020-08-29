#include<stdio.h>
int main102() {
	int zippo[4][2] = { {1,3},{2,4},{6,8},{5,7}};
	//创建一个指向数组的指针
	int(*p)[2] ;
	//二维数组的数组名是指向第一组一维数组的指针
	p = zippo;
	//p+1的是第二组数组的指针
	printf("p = %p\tp + 1 = %p\n", p, p + 1);
	//与上面的代码同理
	printf("zippo = %p\tzippo + 1 = %p\n", zippo, zippo + 1);
	//*p和zippo[]是第一组数组的指针
	printf("*p = %p\tzippo[0]=%p\n", *p, zippo[0]);
	//**p 第一组数组的指针的值
	printf("**p = %d\tzippo[0][0]=%d\t*zippo[0] = %d\n", **p, zippo[0][0],*zippo[0]);
	//zippo数组名指向的就是第一组数组的第一个元素的地址
	printf("zippo[0][0] is %p\t**p is %p\tzippo is %p\n", &zippo[0][0], &**p, zippo);
	//因为指针类型是指向int数组的，所以*(p+1)取得是第二组数组的指针
	printf("**(p + 1)=%d\t*(zippo+1) = %d\n", **(p + 1),**(zippo+1));
	printf("&zippo = %p\t&p = %p\t&*p = %p", &zippo, &p, &*p);
	return 0;
}