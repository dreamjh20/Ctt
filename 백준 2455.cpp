#include <stdio.h>

int MAX = 0;
int passenger = 0;

void count(int out, int in){
	passenger = passenger - out + in;
	if(MAX <= passenger) MAX = passenger;
}

int main(){
	int in, out;
	for(int i = 0; i < 4; i++){
		scanf("%d %d", &out, &in);
		count(out, in);
	}
	printf("%d", MAX);
	return 0;
} 
