#include <stdio.h>

void print(int n, int m){
	for(int i = 0; i <(n-1)*4+1; i++){
		if(i == 0 || m == 0 || i == (n-1)*4 || m == (n-1)*4){
			printf("*"); //바깥틀  
		}
		else{ //안쪽 채우기  
//			if(m %2 == 1){
//				if(i %2 == 0) printf("*");
//				else printf(" ");
//			}
//			
//			else{
//				if(i %2 == 0) printf("*");
//				else printf(" ");
//			}


			if(i %2 == 0){
				if(m%2==0) printf("*");
//				else if(i > 1 && i < n-1 && (i - 1) % 2 == 0) printf("+");
				else if((i - 1) % 2 == 0) printf("+");
				else printf(" "); 
			}
//			else if(i > 1 && i < n-1 && (i - 1) % 2 == 0) printf("+");
//			if(1 %2 == 0 || (m-1) %2 == 0) printf("+");
				
			
			else printf(" ");
		}
	}
	printf("\n");
}

int main(){
	int N;
	scanf("%d", &N);
	for(int i = 0; i<(N-1)*4+1; i++) print(N, i);
	return 0;
}
