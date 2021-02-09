#include <stdio.h>

int main(){
	int in, sum = 0, min = 100;
	for(int i = 0; i < 7; i++){
		scanf("%d", &in);
		if(in % 2 == 1){
			sum += in;
			if(min > in) min = in;
		}
	}
	if(sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);
	return 0;
}
