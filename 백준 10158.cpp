#include <stdio.h>

int main(){
	int w, h, p, q, t, x = 0, y = 0;
	
	scanf("%d %d", &w, &h);
	scanf("%d %d", &p, &q);
	scanf("%d", &t);
	x = (p + t) / w;
	y = (p + t) / h;
	return 0;
}
