#include <stdio.h>


int main(){
	int max = 0, n1, n2, pas = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d %d", &n1, &n2);
		pas = pas-n1+n2;
		if(max < pas) max = pas;
	}
	printf("%d", max);
	return 0;
}
