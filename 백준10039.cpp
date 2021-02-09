#include <stdio.h>

int main(){
	int sum = 0, score;
	for(int y = 0; y < 5; y++){
		scanf("%d", &score);
		if(score < 40) score = 40;
		sum+= score;
	}
	printf("%d", sum/5);
}
