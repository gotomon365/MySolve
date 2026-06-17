#include <stdio.h>
int main() {
    int M = 0;
    int D = 0;
    scanf("%d %d", &M, &D);
    int S = (M * 2 + D) % 3;
    switch (S) {
        case 0:
            printf("普通\n");
            break;
        case 1:
            printf("吉");
            break;
        case 2:
            printf("大吉");
            break;

    }
    return 0;



}
