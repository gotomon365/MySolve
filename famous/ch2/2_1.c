#include <stdio.h>

#define TRUE 1
#define FALSE 0

int my_pow3(int n) {
    return n*n*n;
}

int armstrong_or_not(int n) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += my_pow3(n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    for (int i = 100; i < 1000; i++) {
        if (i == armstrong_or_not(i)) {
            printf("%d\n", i);
      }
        
  }
  return 0;
}
