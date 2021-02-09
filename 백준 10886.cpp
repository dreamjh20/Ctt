#include <stdio.h>

int main(){
	int n, in, YES = 0, NO = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &in);
		if(in == 1) YES++;
		else NO++;
	}
	if(YES > NO) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
	return 0;
}
