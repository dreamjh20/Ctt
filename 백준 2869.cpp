#include <stdio.h>

int main(){
	int V, A, B, h = 0, d = 0;
	scanf("%d %d %d", &A, &B, &V);
	
	
	while(1){
		printf("-");
		d++;
		h += A;
		if(h < V) h -= B;
		else break;
	}
	printf("%d", d);
	return 0;
}
