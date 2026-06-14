#include <stdio.h>
#define TRUE 1
#define FALSE 0


int main() {
    int SIZE = 0;
    scanf(" %d", &SIZE);
    int primes[SIZE];
    for (int i = 1; i <= SIZE; i++) {
        primes[i-1] = i;
    }
    primes[0] = 0;

    for (int i = 1; i <= SIZE; i++) {
        for (int j = 2; j <= SIZE / 2; j++) {
            if (primes[i - 1] != j) {
                primes[i-1] = (primes[i-1] % j) ? primes[i-1] : 0;
            }
        }
    }

    int n = 1;
    for (int i = 1; i <= SIZE; i++) {
        if (primes[i - 1] != 0) {
            printf("%2d", primes[i-1]);
            n++;
        }
        if (n % 10 == 0)   {
            printf("\n");
            n++;
        }

    }
    return 0;
}
