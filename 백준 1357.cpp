#include <stdio.h>

int Rev(int M){
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	int result = 0;
	n1 = M % 10;
	n2 = M % 100 / 10;
	n3 = M % 1000 / 100;
	n4 = M / 1000;
//	printf("%d %d %d %d", n1, n2, n3, n4);
	if(n4 > 0){
		result = n1 * 1000 + n2 * 100 + n3 * 10 + n4;
	} else if(n3 > 0){
		result = n1 * 100 + n2 * 10 + n3;
	} else if(n2 > 0){
		result = n1 * 10 + n2;
	}
	else result = n1;
//	printf("result: %d", result);
	return result;
	
}

int main(void){
	int X, Y;
	scanf("%d %d", &X, &Y);
	printf("%d", Rev(Rev(X) + Rev(Y)));
//	Rev(X);

	return 0;
}
