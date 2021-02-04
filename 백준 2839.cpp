#include <stdio.h>

int main(){
	int N, dlv = 0;
	scanf("%d", &N);
	while(N > 0){
		if(N % 5 == 0){
			N -= 5;
			dlv++;
		}
		else if(N % 3 == 0){
			N -= 3;
			dlv++;
		}
		else if(N > 5){
			N -= 5;
			dlv++;
		}
		else{
			dlv = -1;
			break;
		}
	}
	printf("%d", dlv);
	return 0;
} 
