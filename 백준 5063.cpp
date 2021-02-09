#include <stdio.h>

void check(int r, int e, int c){
	if (r == e - c) printf("does not matter\n");
    else if (r > e - c)  printf("do not advertise\n");
    else printf("advertise\n");
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int r, e, c;
        scanf("%d %d %d", &r, &e, &c);
        check(r, e, c);
    }
    return 0;
}
