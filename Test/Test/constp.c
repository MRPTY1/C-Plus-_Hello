#include<stdio.h>
int main103() {
	int x = 20;
	const y = 10;
	int* p1 = &x;
	const int* p2 = &y;
	printf("p1 = %p\tp2 = %p\n", p1, p2);
	//const int ָ�����ͣ�ָ���int����ֻ��������ָ������޸�
	//const int����ָ�븳ֵ��int����ָ�����Ӱ�ȫ����Ȼ��ͬ�����ǲ��ᱨ��
	p1 = p2;
	//p2=p1
	//����ȫ����const int ָ������ָ��intָ�룬C++�ᱨ��
	const int* const p3 = &x;
	x = 30;
	//p3 = p1;
	//const int ָ�����͵�constָ�룬�����޸�ָ��,���ǿ�����ԭ���ı������޸ģ���Ϊû�����const
	//const������Ҫ��constָ�룬���ָ��Ҳ��ϣ�����ģ�ָ��Ҳ��Ҫ��const�ؼ���
	//const��ʲôǰ�������ʲô
	printf("p1 = %p\tp2 = %p\tp3 = %p\n", p1, p2, p3);
	printf("*p1 = %d\t*p2 = %d\t*p3 = %d\n", *p1, *p2, *p3);
}