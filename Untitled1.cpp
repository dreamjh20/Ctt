#include <stdio.h>

int main(){
	int in, N;
	double sum = 0, out = 0, max=0;
	long long int arr=0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &in);
		arr = arr*1000 + in;
		if(in > max) max = in;
	}
	
	for(int m = 0; m < N; m++){
		out = arr%1000;
		arr /= 1000;
		sum += out/max * 100;
	}
	
	printf("%lf", (double)(sum/N));
	return 0;
}
