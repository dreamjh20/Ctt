#include <stdio.h>

int main(){
	int C, K, P, sum = 0;
	scanf("%d %d %d", &C, &K, &P);
	while(C>0){
		sum += K*C + P*C*C;
		printf("%d\n", K*C + P*C*C);
		C--;
	}
	printf("%d", sum);
} 
