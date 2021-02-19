#include <stdio.h>

int twist(int N){
	int n1, n2, n3, twisted = 0;
	n1 = N % 10;
	n2 = N % 100 / 10;
	n3 = N / 100;
//	printf("%d %d %d", n1, n2, n3);
    twisted = n1 * 100 + n2 * 10 + n3;
    return twisted;
}

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	twist(A) > twist(B) ? printf("%d", twist(A)) : printf("%d", twist(B));
	return 0;
}
