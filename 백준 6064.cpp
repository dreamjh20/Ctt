#include <stdio.h>

int main() {
	int M, N, x, y, ans, T, fail = -1;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d", &M, &N, &x, &y);
		ans = x;
		y %= N;
		while ((ans <= M * N) && ans % N != y) { �ذ���������
			ans += M;
		}
		if (ans > M * N) printf("%d", fail);
		else printf("%d", ans);
	}
	return 0;
}
