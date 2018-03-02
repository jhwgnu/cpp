#include <stdio.h>

int main (void){
	int i = 10;
	int *pi = &i;
	
	printf("변수 pi의 내부주소 = %p\n", &pi);
	printf("변수 pi의 내부값 = %p\n", pi);
	printf("변수 pi가 가르키는 메모리에 저장되는 값 = %d\n", *pi);
}
