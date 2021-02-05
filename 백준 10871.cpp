#include <stdio.h>

int main(){
	int N, X, sum = 0, in, count, time = 10;
	scanf("%d %d", &N, &X);
	for(int i = 0; i < N; i++){
		scanf("%d", &in);
		if(in < X){
			sum = time * in + sum;
			count++;
			time *= 10;
		}
	}
	for(int i = 0; i < count; i++){
		printf("%d", sum%10);
		sum /= 10;
	}
}
