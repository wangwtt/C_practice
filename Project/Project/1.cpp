#include<stdio.h>
void main() {
	int i = 0;
	while (i < 30) {
		++i;//����++i��i++û����
		printf("I love you %d\n", i);
	}
	printf("%d\n",i);//30
	int b1 = i++;
	int b2 = ++i;
	printf("%d\n", b1);//30
	printf("%d\n", b2);//32
	//���������i++��������䱾��
}
//�����1��ʼ