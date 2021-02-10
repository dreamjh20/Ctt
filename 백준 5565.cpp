#include <stdio.h>

int main(){
	int sum = 0, all, in;
	scanf("%d", &all);
	for(int i = 0; i < 9; i++){
		scanf("%d", &in);
		sum += in;
	}
	printf("%d", all - sum);
	return 0;
}
