#include <stdio.h>

void invertcase(char *s) {
    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            if (*s >= 'a' && *s <= 'z') {
                *s = *s - 32;
            } 
            else {
                *s = *s + 32;
            }
        }
        s++;
    }
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        invertcase(argv[1]);
        printf("%s\n", argv[1]);
    } else {
        printf("entrer des characteres\n");
    }
    return 0;
}
