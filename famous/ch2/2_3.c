#include <stdio.h>

#define TRUE 1
#define FALSE 0

int primes[200] = {0};

int main() {
    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    int index_of_primes = 4;
    int  num = 10;
    while (index_of_primes <= 200) {
        int is_prime = TRUE;
        for (int i = 0; i < index_of_primes; i++) {
            if (num % primes[i] == 0) {
                is_prime = FALSE;
                break;
            }
        }
        if (is_prime == TRUE) {
            primes[index_of_primes++] = num;
        }
        num++;
    }
    for (int i = 0; i < 200; i++) {
        (i+1) % 10 ? printf("%4d ", primes[i]) : printf("%4d\n", primes[i]);
    }
    return 0;
}

