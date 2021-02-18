#include<stdio.h>

int main(){
	int i, j, k, temp;
	
	for(i=1;i<10000;i++)
		for(j=0;j<i;j++){ 
			temp=j;
			for(k=j;k!=0;k/=10) temp+=k%10;
			if(temp==i){
				break;
			}
			if(j==i-1) printf("%d\n",i);
		}
	return 0;
}
