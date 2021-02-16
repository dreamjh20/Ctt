#include <stdio.h>

int main(){
	int  M, N, MIN = 100001, SUM = 0;
	scanf("%d\n%d", &M, &N);
	for(int i = M; M < N; M++){
		if(M == 1) continue;
		for(int j = 2; j < M; j++){
			if(M % j == 0){
				if(M -1 == j){
					SUM += M;
				if(MIN > M) MIN = M;
				}
				else break;
			}
//			else if(M -1 == j){
//				printf("%d ", M);
//			    SUM += M;
//				if(MIN > M) MIN = M;
//			}
		}
	}
	if(SUM == 0) printf("-1");
	else printf("%d\n%d", SUM, MIN);
	return 0;
} 
