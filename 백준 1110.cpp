#include <stdio.h>

int main(){
	int N, result = 0, count = 0;
	int n1, n2;
	scanf("%d", &N);
	result = N;
	while(1){
		n1 = (N/10 + N%10)%10;
		n2 = N%10*10 + n1;
		N = n2;
		count++;
		if(n2 == result) break;
	}
	printf("%d", count);
} 
