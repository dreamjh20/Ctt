#include <stdio.h>

void timer(int h, int m){
	if(m >= 60){
		h++;
		m %= 60;
	}
	if(h >= 24){
		h %= 24;
	}
	printf("%d %d\n", h, m);
}
int main(){
	int h, m, time;
	scanf("%d %d", &h, &m);
	scanf("%d", &time);
	h += time / 60;
	m += time % 60;
	timer(h, m);
	return 0;
}
