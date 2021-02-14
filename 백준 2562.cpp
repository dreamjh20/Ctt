#include <stdio.h>

void Su(int N) {
    int i, count = 99, A, B, C;
    for (i = 100; i <=N; i++) {
        A = i / 100;
        B = i / 10 % 10;
        C = i % 10;
        if ((C - B) == (B - A))
            count++;
    }
    printf("%d", count);
}

int main()
{
    int N;
    scanf("%d", &N);
    if (N<100) printf("%d",N);
    else Su(N);
    return 0;
}

