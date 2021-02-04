#include <stdio.h>

void multiply(int n1, int n2){
	printf("%d\n", n1 * (n2%10));
	printf("%d\n", n1 * (n2%100 / 10));
	printf("%d\n", n1 * (n2/100));
}

int main(){
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	multiply(num1, num2);
	
	printf("%d", num1*num2);
	return 0;
} 
