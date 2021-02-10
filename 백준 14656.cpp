#include <stdio.h>

int main(){
	int hit=0, num, stu;
	scanf("%d", &stu);
	for(int i = 1; i < stu+1; i++){
		scanf("%d", &num);
		if(num != i) hit++; 
	} 
	printf("%d", hit);
	return 0;
} 
