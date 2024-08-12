#include <cstdio>

int main() {
    char c;
    int count = 0;
    while ((c = getc(stdin)) != EOF) {
        count++;
    }
    printf("%d\n", count);
}