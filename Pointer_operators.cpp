// long time to go and you forget the basics, not matter, go for it
#include<stdio.h>

int main(void) {
    int count = 5, x;
    int* a_pointer;

    a_pointer = &count;
    x = *a_pointer;

    printf("%d\n", x);

    return 0;
}