#include <stdio.h>

int main() {
    int N;
    double Arr[1000], max = 0, avg = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%lf", &Arr[i]);
        
        if (max < Arr[i])
            max =Arr[i];        
    }
    
    for (int i = 0; i < N; i++){
        Arr[i] = Arr[i] / max * 100.0;
        avg += Arr[i];
    }
    
    printf("%.2lf", (avg/(double)N));
    
	return 0;
}
