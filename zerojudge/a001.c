#include <string.h>
#include <stdio.h>

char s[1024];
int main() {
    gets(s);
    printf("hello, %s\n", s);
    return 0;

}
