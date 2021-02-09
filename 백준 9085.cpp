#include <stdio.h>

int main(){
	int T, N, in, sum = 0;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		scanf("%d", &N);
		for(int j = 0; j < N; j++){
			scanf("%d", &in);
			sum += in;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
