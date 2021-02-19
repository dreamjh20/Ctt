#include <stdio.h>

int remain(){
	int student, apple, rem = 0;
	scanf("%d %d", &student, &apple);
	rem = apple % student;
	return rem;
}
int main(){
	int N, sum = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) sum += remain();
	printf("%d", sum); 
	return 0;
}
