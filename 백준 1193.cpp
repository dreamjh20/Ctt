#include <stdio.h>

void print_fraction(int M, int num){
	int mother = 0, son = 0;
	if(M % 2 == 0){
		son = num;
		mother = M - son + 1;
		printf("%d/%d", son, mother);
	}
	else {
		mother = num;
		son = M - mother + 1;
		printf("%d/%d", son, mother);
	}
}

int main(){
	int num, N = 0, i = 1, many = 0; 
	scanf("%d", &num);
	N = num;

	while(1){
		num -= i;
		if(num <= 0) break;
		else i++;
	}
	
	for(int j = 1; j < i; j++){
		many += j;
//		printf("%d ", many);
	}
//	printf("\n줄에서 몇째: %d  몇 번째 줄: %d", N-many , i);
	
	print_fraction(i, N-many);\
	return 0;
}
