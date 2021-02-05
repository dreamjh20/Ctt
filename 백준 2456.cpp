#include <stdio.h>

void count(int *n){
	int add;
	scanf("%d", &add);
	*n += add;
}
int max(int n1, int n2, int n3){
	int max = 0;
	if(n1 >= max) max = n1;
	if(n2 >= max) max = n2;
	if(n3 >= max) max = n3;
	return max;
}
int main(){
	int n1 = 0, n2 = 0, n3 = 0, stu;
	scanf("%d", &stu);
	for(int i = 0; i < stu; i++){
		count(&n1);
		count(&n2);
		count(&n3);
	}
	if(n1 > n2 && n1 > n3) printf("1 %d", n1);
	else if(n2 > n1 && n2 > n3) printf("2 %d", n2);
	else if(n3 > n1 && n3 > n2) printf("3 %d", n3);
	else printf("0 %d", max(n1, n2, n3));
}
