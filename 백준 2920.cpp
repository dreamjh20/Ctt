#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, n6, n7, n8;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	scanf("%d", &n5);
	scanf("%d", &n6);
	scanf("%d", &n7);
	scanf("%d", &n8);
	if(n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5 && n5 < n6 && n6 < n7 && n7 < n8) printf("ascending");
	else if(n1 > n2 && n2 > n3 && n3 > n4 && n4 > n5 && n5 > n6 && n6 > n7 && n7 > n8) printf("descending");
	else printf("mixed");
	return 0;
}
