#include <stdlib.h>
#include <stdio.h>

int main () {

    int n = 11;
    int remainder;
    int count = 0;

    while ( n != 0) {
        if (n % 2 != 0) {
            count += 1;
        }
        n = n / 2;
        printf("%d \n", n);
    }

    printf("%d \n", count);
    return 0;
}