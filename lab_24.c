#include <stdio.h>
int swapx(int x, int y){
	int n;
	n = x;
	x = y;
	y = n;
	printf("call by value : x = %d y = %d ", x, y);
	}

int main(){
	int a = 10, b = 20;
	swapx(a, b);
	printf("\n");
	printf("a = %d b = %d ", a, b);
	swapx2(&a, &b);
	printf("\n");
	printf("a = %d b = %d ", a, b);
}
	int swapx2(int* x2, int* y2){
	int n2;
	printf("\n");
	n2 = *x2;
	*x2 = *y2;
	*y2 = n2;
	printf("call by reference : x2 = %d y2 = %d ", *x2, *y2);
}
