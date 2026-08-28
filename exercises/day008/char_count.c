#include <stdio.h>

int main() {
    char name[] = "sensor2026ok";
    int letters = 0, digits = 0;
    int i;

    for (i = 0; name[i] != '\0'; i++) {
        char c = name[i];
        if (c >= '0' && c <= '9') {
            digits++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        }
    }

    printf("letters: %d\n", letters);
    printf("digits: %d\n", digits);

    return 0;
}