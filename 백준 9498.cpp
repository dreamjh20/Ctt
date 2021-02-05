#include <stdio.h>
void grade(int n){
	if(n<=100 && n >=90) printf("A");
	else if(n < 90 && n >= 80) printf("B");
	else if(n < 80 && n >= 70) printf("C");
	else if(n < 70 && n >= 60) printf("D");
	else printf("F");
}
int main(){
	int score;
	scanf("%d", &score);
	grade(score);
} 
