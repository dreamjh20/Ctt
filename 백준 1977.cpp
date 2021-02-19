#include <stdio.h>

int main(){
	int M, N, MIN = 10000, SUM = 0;
	scanf("%d %d", &M, &N);
	printf("--------\n");
	int i = 1, value = 0;
	while ((value = i * i) <= N) {
		printf("--------\n");
        if (value >= M) {
            SUM += value;
            if (MIN > value) MIN = value;
        }
        i++;
    }
    if(SUM == 0) printf("-1");
    else printf("%d\n%d", SUM, MIN);
    return 0;
} 
