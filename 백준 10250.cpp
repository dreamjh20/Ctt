#include <stdio.h>

int main(){
	int M, H, W, N;
	scanf("%d", &M);
//	printf("-------\n");
	for(int i = 0; i < M; i++){
//		printf("-------\n");
		int room = 1, h = 1;
		scanf("%d %d %d", &H, &W, &N);
		for(int j = 0; j < N; j++){
			if(h <= H){
				room += 100;
				h++;
			}
			else{
				while(1){
					if(room < 200) break;
					room -= 100;
				}
				room++;
				h = 2;
			}
//			printf("---%d\n", room);
		}
		printf("%d\n", room);
	}
	return 0;
} 
