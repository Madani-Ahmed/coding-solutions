#include <stdio.h>
#include <string.h>

int main(void) {
    const char *words[] = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    int a, b, i;

    if (scanf("%d %d", &a, &b) != 2) return 1;

    for (i = a; i <= b; i++) {
        if (i < 10)
            printf("%s\n", words[i]);
        else if (i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");}
            return 0;
    }
