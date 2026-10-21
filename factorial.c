#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (n; n >= 1; n--) {
        i = i * n;
    }

    printf("Factorial=%d\n", i);
    return 0;
}