#include<stdio.h>

void main() {
    int cnt;
    int num;
    int cnt2;

    while(num < 6) {
        scanf("%d", &num);
        cnt2 = 1;
        while( cnt2 < 3) {
            do {
                printf("%d", num);
            }
            cnt2 = cnt2 + 1;
        }
    }
    cnt = cnt + 1;
}




