#include<stdio.h>
int main102() {
	int zippo[4][2] = { {1,3},{2,4},{6,8},{5,7}};
	//����һ��ָ�������ָ��
	int(*p)[2] ;
	//��ά�������������ָ���һ��һά�����ָ��
	p = zippo;
	//p+1���ǵڶ��������ָ��
	printf("p = %p\tp + 1 = %p\n", p, p + 1);
	//������Ĵ���ͬ��
	printf("zippo = %p\tzippo + 1 = %p\n", zippo, zippo + 1);
	//*p��zippo[]�ǵ�һ�������ָ��
	printf("*p = %p\tzippo[0]=%p\n", *p, zippo[0]);
	//**p ��һ�������ָ���ֵ
	printf("**p = %d\tzippo[0][0]=%d\t*zippo[0] = %d\n", **p, zippo[0][0],*zippo[0]);
	//zippo������ָ��ľ��ǵ�һ������ĵ�һ��Ԫ�صĵ�ַ
	printf("zippo[0][0] is %p\t**p is %p\tzippo is %p\n", &zippo[0][0], &**p, zippo);
	//��Ϊָ��������ָ��int����ģ�����*(p+1)ȡ���ǵڶ��������ָ��
	printf("**(p + 1)=%d\t*(zippo+1) = %d\n", **(p + 1),**(zippo+1));
	printf("&zippo = %p\t&p = %p\t&*p = %p", &zippo, &p, &*p);
	return 0;
}