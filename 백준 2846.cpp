#include <cstdio> 

int N;
int a, b,up,max,now;

int main() {
	scanf("%d", &N);
	scanf("%d", &a);
	for (int i = 1; i < N; i++) {
		scanf("%d", &b);
		if (a < b) {
			up = b - a;
			now += up;
			if (now > max) {
				max = now;
				}
		}
		else {
			up = 0;
			now = 0;
		}
		a = b;
	}
	printf("%d", max);

	return 0;
}
