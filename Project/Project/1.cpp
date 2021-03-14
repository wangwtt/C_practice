#include<stdio.h>
void main() {
	int i = 0;
	while (i < 30) {
		++i;//这里++i和i++没区别
		printf("I love you %d\n", i);
	}
	printf("%d\n",i);//30
	int b1 = i++;
	int b2 = ++i;
	printf("%d\n", b1);//30
	printf("%d\n", b2);//32
	//五个连续的i++输出还是其本身
}
//结果从1开始