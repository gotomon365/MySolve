#include <stdio.h>
#define TRUE 1
#define FALSE 0

int my_pow(int base, int exp) {
    int res = 1;
    while (exp) {
        res *= base;
        exp--;
    }
    return res;
}
int main() {
    int start = 0, end = 0;
    int find_it = FALSE;
    scanf("%d %d", &start, &end);
        
    for (int i = start; i <= end; i++) {
        int num = i;
        int sum = 0;
        int digit = 0;
        
        
        while (num != 0) {
            num /= 10;
            digit++;
        }

        num = i;
        while (num != 0) {
            sum += my_pow(num %10, digit); 
            num /= 10;
        }

        if (sum == i) {
            find_it = TRUE;
            printf("%d ", i);
        }

    }

    if (!find_it) {
        printf("none\n");
    }
    return 0;
}
