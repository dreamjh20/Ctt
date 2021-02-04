#include <stdio.h>

int up = 0;
int down = 1;
int flag = 0; 
void print(int n, int m){
	for(int i = 0; i <(n-1)*4+1; i++){
		if(i == 0 || m == 0 || i == (n-1)*4 || m == (n-1)*4){
			printf("*"); //테두리   
		}
		else{ //안쪽 
//			if(m %2 == 1){
//				if(i %2 == 0) printf("*");
//				else printf(" ");
//			}
//			
//			else{
//				if(i %2 == 0) printf("*");
//				else printf(" ");
//			}

			if(i % 2 == 0){
				if(m % 2 == 0) printf("*");
				//else printf(" ");
				else if(m % 2 == 1 && m > 1 && m < (n-1)*4-1 /*&& i != (n-1)*2*/) printf("+");
				else printf(" ");
				
			}
			
//			else if(i>1||i<n-1||i%2==1)printf("+");
//			else if(i > 1 && i < n-1 && (i - 1) % 2 == 0) printf("+");
//			if(1 %2 == 0 || (m-1) %2 == 0) printf("+");
				
			else printf(" ");
		}
	}
	flag ++;
	printf("\n");
}

int main(){
	int N;
	scanf("%d", &N);
//	if(N == 1 || N == 2 ) flag = 0;
//	else flag = (N-3)*2 +1;
	for(int i = 0; i<(N-1)*4+1; i++) print(N, i);
	
	return 0;
}
