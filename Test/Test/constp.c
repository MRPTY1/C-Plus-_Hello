#include<stdio.h>
int main103() {
	int x = 20;
	const y = 10;
	int* p1 = &x;
	const int* p2 = &y;
	printf("p1 = %p\tp2 = %p\n", p1, p2);
	//const int 指针类型，指向的int类型只读，但是指针可以修改
	//const int类型指针赋值给int类型指针会更加安全，虽然不同，但是不会报错
	p1 = p2;
	//p2=p1
	//不安全，从const int 指针类型指向int指针，C++会报错
	const int* const p3 = &x;
	x = 30;
	//p3 = p1;
	//const int 指针类型的const指针，不能修改指针,但是可以用原来的变量名修改，因为没有添加const
	//const变量需要用const指针，如果指针也不希望更改，指针也需要加const关键字
	//const在什么前面就修饰什么
	printf("p1 = %p\tp2 = %p\tp3 = %p\n", p1, p2, p3);
	printf("*p1 = %d\t*p2 = %d\t*p3 = %d\n", *p1, *p2, *p3);
}