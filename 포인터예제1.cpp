#include <stdio.h>

int main (void){
	int i = 10;
	int *pi = &i;
	
	printf("���� pi�� �����ּ� = %p\n", &pi);
	printf("���� pi�� ���ΰ� = %p\n", pi);
	printf("���� pi�� ����Ű�� �޸𸮿� ����Ǵ� �� = %d\n", *pi);
}
