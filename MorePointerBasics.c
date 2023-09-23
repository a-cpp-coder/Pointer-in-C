// Code, feel it more, love more

#include <stdio.h>

int main(void) {
    char c = 'a';
    char* char_pointer = &c;    // "indirect referece" to a character - char pointer

    printf("%c %c\n", c, *char_pointer);

    c = 'b';
    printf("%c %c\n", c, *char_pointer);

    *char_pointer = 'c';
    printf("%c %c\n", c, *char_pointer);

    return 0;
}