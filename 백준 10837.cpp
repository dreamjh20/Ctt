#include<stdio.h>

int max(int a, int b){
    return a>b? a : b;
}

int main(){
    int k,c;
    scanf("%d %d", &k, &c);

    for(int i = 0; i < c; i++){
        int a, b;
        scanf("%d %d",&a,&b);

        int R=k-max(a,b);
        if((a < b && b - R- a > 1) || (a >= b && a - R- b > 2)) printf("0\n");
        else printf("1\n");
        
    }
    return 0;
}
