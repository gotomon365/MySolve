#include <stdio.h>

int sum_of_arange(int n1, int n2) {
    int res = 0;
    for (int i = n1; i <= n2; i++) {
        res += i; 
    }
    return res;
}

int main() {
    int n;
    scanf(" %d", &n);
    int i = 1, j = i+1;
    while (j != n) {
        int res = sum_of_arange(i, j);
        if (res == n) {
            printf("%d ~ %d\n", i, j);
            i = j+1;
            j++;
        } else if (res < n) {
            j++;
        } else {
            i++;
        }
    }
    
    // printf("%d\n", sum_of_arange(1, 100));
    return 0;
}
