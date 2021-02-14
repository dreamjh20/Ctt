#include <stdio.h>

int plus(int n){
	int sum = 0, count = 1;
	int i = 0;
	while(i < n){
		for(int j = 0; j < count; j++){
			sum += count;
			i++;
			if(i >= n) break;
		}
		count++;	
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", plus(b) - plus(a-1) );
	return 0;
}
